//����Լ� �˰���
long long int euclidRecursive(long long int a, long long int b)
{
    if (b == 0) return a; // b�� 0�̸� a�� ��ȯ
    return euclidRecursive(b, a % b); // a�� b�� ���� �������� b�� ���ȣ��
}

//�ݺ��Լ� �˰���
long long int euclidRepeatative(long long int a, long long int b)
{
    long long int temp;
    while (b != 0) //b�� 0�� �ƴ� ���� �ݺ�
    {
        temp = b; //b�� temp�� ����
        b = a % b; // a�� b�� ���� �������� b�� ����
        a = temp; //temp�� a�� ����
    }
    return a; //a�� ����
}