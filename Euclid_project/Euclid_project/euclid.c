//����Լ� �˰���
long long int euclidRecursive(long long int a, long long int b)
{
	if (b == 0) return a;
	return euclidRecursive(b, a % b);
	return 0;
}

//�ݺ��Լ� �˰���
long long int euclidRepeatative(long long int a, long long int b)
{
	long long int temp;
	while (b!= 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return 0;
}