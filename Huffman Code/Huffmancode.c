#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARACTERS 1000 // ����: ����� ũ��� ����

typedef struct Node {
    char character;
    int frequency;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct {
    char character;
    char code[100];
} Code;

// ���� �󵵼� ��� �� ���� ����
void calculateAndSaveFrequencies(char* inputFile, char* statsFile) {
    FILE* file = fopen(inputFile, "r");
    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    int frequencies[MAX_CHARACTERS] = { 0 };

    int c;
    while ((c = fgetc(file)) != EOF) {
        frequencies[(unsigned char)c]++;
    }

    fclose(file);

    FILE* output = fopen(statsFile, "w");
    if (output == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return;
    }

    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (frequencies[i] > 0) {
            fprintf(output, "%c\t%d\n", (char)i, frequencies[i]);
        }
    }

    fclose(output);
}

// �󵵼��� ������� Huffman Ʈ�� ����
Node* buildHuffmanTree(int* frequencies) {
    Node* nodes[MAX_CHARACTERS] = { NULL };

    // �ܸ� ��� ����
    int count = 0;
    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (frequencies[i] > 0) {
            Node* node = (Node*)malloc(sizeof(Node));
            node->character = (char)i;
            node->frequency = frequencies[i];
            node->left = NULL;
            node->right = NULL;
            nodes[count++] = node;
        }
    }

    // Huffman Ʈ�� ����
    while (count > 1) {
        int min1 = 0;
        int min2 = 1;

        if (nodes[min1]->frequency > nodes[min2]->frequency) {
            int temp = min1;
            min1 = min2;
            min2 = temp;
        }

        for (int i = 2; i < count; i++) {
            if (nodes[i]->frequency < nodes[min1]->frequency) {
                min2 = min1;
                min1 = i;
            } else if (nodes[i]->frequency < nodes[min2]->frequency) {
                min2 = i;
            }
        }

        Node* mergedNode = (Node*)malloc(sizeof(Node));
        mergedNode->character = '\0';
        mergedNode->frequency = nodes[min1]->frequency + nodes[min2]->frequency;
        mergedNode->left = nodes[min1];
        mergedNode->right = nodes[min2];

        nodes[min1] = mergedNode;
        nodes[min2] = nodes[count - 1];
        count--;
    }

    return nodes[0];
}

// �ڵ� ����
void generateCodes(Node* node, char* code, int depth, Code codes[MAX_CHARACTERS], int* codeCount) {
    if (node->left == NULL && node->right == NULL) {
        code[depth] = '\0';
        codes[*codeCount].character = node->character;
        strcpy(codes[*codeCount].code, code);
        (*codeCount)++;
        return;
    }

    code[depth] = '0';
    generateCodes(node->left, code, depth + 1, codes, codeCount);

    code[depth] = '1';
    generateCodes(node->right, code, depth + 1, codes, codeCount);
}

// Huffman ���� ����
void compressHuffman(char* inputFile, char* outputFile, Code codes[MAX_CHARACTERS], int codeCount) {
    FILE* input = fopen(inputFile, "r");
    if (input == NULL) {
        printf("�Է� ������ �� �� �����ϴ�.\n");
        return;
    }

    FILE* output = fopen(outputFile, "wb");
    if (output == NULL) {
        printf("��� ������ �� �� �����ϴ�.\n");
        fclose(input);
        return;
    }

    unsigned int bitBuffer = 0;
    unsigned int bitCount = 0;

    int c;
    while ((c = fgetc(input)) != EOF) {
        for (int i = 0; i < codeCount; i++) {
            if (codes[i].character == c) {
                char* code = codes[i].code;
                int codeLength = strlen(code);

                for (int j = 0; j < codeLength; j++) {
                    bitBuffer <<= 1;
                    if (code[j] == '1') {
                        bitBuffer |= 1;
                    }
                    bitCount++;

                    if (bitCount == 8) {
                        fputc(bitBuffer, output);
                        bitBuffer = 0;
                        bitCount = 0;
                    }
                }

                break;
            }
        }
    }

    // ������ ���� ��Ʈ�� ����
    if (bitCount > 0) {
        bitBuffer <<= (8 - bitCount);
        fputc(bitBuffer, output);
    }

    fclose(input);
    fclose(output);
}

// Huffman ���� ���� ����
void decompressHuffman(char* statsFile, char* inputFile, char* outputFile) {
    FILE* stats = fopen(statsFile, "r");
    if (stats == NULL) {
        printf("��� ������ �� �� �����ϴ�.\n");
        return;
    }

    int frequencies[MAX_CHARACTERS] = { 0 };
    char character;
    int frequency;

    while (fscanf(stats, "%c\t%d\n", &character, &frequency) != EOF) {
        frequencies[(unsigned char)character] = frequency;
    }

    fclose(stats);

    Node* huffmanTree = buildHuffmanTree(frequencies);

    Code codes[MAX_CHARACTERS];
    int codeCount = 0;
    char code[100];
    generateCodes(huffmanTree, code, 0, codes, &codeCount);

    FILE* input = fopen(inputFile, "rb");
    if (input == NULL) {
        printf("�Է� ������ �� �� �����ϴ�.\n");
        return;
    }

    FILE* output = fopen(outputFile, "w");
    if (output == NULL) {
        printf("��� ������ �� �� �����ϴ�.\n");
        fclose(input);
        return;
    }

    Node* currentNode = huffmanTree;

    unsigned int bitBuffer = 0;
    unsigned int bitCount = 0;
    int eof = 0;

    while (!eof) {
        if (bitCount == 0) {
            bitBuffer = fgetc(input);
            if (bitBuffer == EOF) {
                break;
            }
            bitCount = 8;
        }

        int bit = (bitBuffer & 0x80) ? 1 : 0;
        bitBuffer <<= 1;
        bitCount--;

        if (bit) {
            currentNode = currentNode->right;
        } else {
            currentNode = currentNode->left;
        }

        if (currentNode->left == NULL && currentNode->right == NULL) {
            fputc(currentNode->character, output);
            currentNode = huffmanTree;
        }
    }

    fclose(input);
    fclose(output);
}

// �� ������ �������� ��
int compareFiles(char* file1, char* file2) {
    FILE* f1 = fopen(file1, "r");
    if (f1 == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 0;
    }

    FILE* f2 = fopen(file2, "r");
    if (f2 == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        fclose(f1);
        return 0;
    }

    int c1, c2;
    while ((c1 = fgetc(f1)) != EOF && (c2 = fgetc(f2)) != EOF) {
        if (c1 != c2) {
            fclose(f1);
            fclose(f2);
            return 0;
        }
    }

    int endOfFile1 = feof(f1);
    int endOfFile2 = feof(f2);

    fclose(f1);
    fclose(f2);

    return endOfFile1 && endOfFile2;
}

// ����� ���
double calculateCompressionRatio(char* inputFile, char* compressedFile) {
    FILE* input = fopen(inputFile, "r");
    if (input == NULL) {
        printf("�Է� ������ �� �� �����ϴ�.\n");
        return 0;
    }

    FILE* compressed = fopen(compressedFile, "rb");
    if (compressed == NULL) {
        printf("���� ������ �� �� �����ϴ�.\n");
        fclose(input);
        return 0;
    }

    fseek(input, 0L, SEEK_END);
    long inputSize = ftell(input);
    fseek(compressed, 0L, SEEK_END);
    long compressedSize = ftell(compressed);

    fclose(input);
    fclose(compressed);

    return (double)compressedSize / inputSize;
}

int main() {
    char inputFile[] = "C:\\Users\\pa010\\Documents\\algorithm_2023\\Huffman Code\\input.txt";
    char statsFile[] = "C:\\Users\\pa010\\Documents\\algorithm_2023\\Huffman Code\\stats.txt";
    char compressedFile[] = "C:\\Users\\pa010\\Documents\\algorithm_2023\\Huffman Code\\output.huf";
    char decompressedFile[] = "C:\\Users\\pa010\\Documents\\algorithm_2023\\Huffman Code\\output.txt";

    // 1. �Է� ������ �о ���� �󵵼��� ����ϰ� stats.txt�� ����
    calculateAndSaveFrequencies(inputFile, statsFile);

    // 2. stats.txt�� �о Huffman Tree�� ����
    int frequencies[MAX_CHARACTERS] = { 0 };
    FILE* stats = fopen(statsFile, "r");
    char character;
    int frequency;

    while (fscanf(stats, "%c\t%d\n", &character, &frequency) != EOF) {
        frequencies[(unsigned char)character] = frequency;
    }

    fclose(stats);

    Node* huffmanTree = buildHuffmanTree(frequencies);

    // 3. Huffman Tree�� ������� ���ڿ� ���� Huffman �ڵ� ����
    Code codes[MAX_CHARACTERS];
    int codeCount = 0;
    char code[100];
    generateCodes(huffmanTree, code, 0, codes, &codeCount);

    // 4. input.txt�� Huffman �ڵ带 �̿��Ͽ� �����ϰ� output.huf ���Ϸ� ����
    compressHuffman(inputFile, compressedFile, codes, codeCount);

    // 5. stats.txt�� �о Huffman Tree�� �籸���ϰ� output.huf�� output.txt�� ���� ����
    decompressHuffman(statsFile, compressedFile, decompressedFile);

    // 6. input.txt�� output.txt�� �������� ��
    if (compareFiles(inputFile, decompressedFile)) {
        printf("���� ������ ���ϰ� ���� ������ �����մϴ�.\n");
    } else {
        printf("���� ������ ���ϰ� ���� ������ �ٸ��ϴ�.\n");
    }

    // 7. ����� ���
    double compressionRatio = calculateCompressionRatio(inputFile, compressedFile);
    printf("�����: %.2f%%\n", compressionRatio * 100);

    return 0;
}
