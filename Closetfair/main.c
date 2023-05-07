#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point a, Point b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

void findClosestPairs(const char* inputFileName, const char* outputFileName)
{
    FILE* inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return;
    }

    // Count the number of points in the file
    int numPoints = 0;
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        if (c == '\n') {
            numPoints++;
        }
    }
    rewind(inputFile);

    // Read the points from the file into an array
    Point* points = (Point*)malloc(sizeof(Point) * numPoints);
    if (points == NULL) {
        printf("Memory allocation failed.\n");
        fclose(inputFile);
        return;
    }

    for (int i = 0; i < numPoints; i++) {
        fscanf(inputFile, "%d %d", &points[i].x, &points[i].y);
    }
    fclose(inputFile);

    // Find the closest pair
    double minDistance = -1;
    Point closestPair[2];

    for (int i = 0; i < numPoints; i++) {
        for (int j = i + 1; j < numPoints; j++) {
            double dist = distance(points[i], points[j]);
            if (minDistance < 0 || dist < minDistance) {
                minDistance = dist;
                closestPair[0] = points[i];
                closestPair[1] = points[j];
            }
        }
    }

    // Save the result to the output file
    FILE* outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("Failed to open the output file.\n");
        free(points);
        return;
    }

    fprintf(outputFile, "%d %d\n%d %d\n", closestPair[0].x, closestPair[0].y, closestPair[1].x, closestPair[1].y);
    fclose(outputFile);

    free(points);
}

int main()
{
    const char* inputFileName = "data.txt";
    const char* outputFileName = "result.txt";
    findClosestPairs(inputFileName, outputFileName);
    return 0;
}
