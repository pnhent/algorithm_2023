#include<stdio.h>

int main(int argc, char * argv[])
{
	int i; 
	printf("hello world");
	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	_getch();
	return 0;
}
