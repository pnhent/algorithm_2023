#include <stdio.h>

int main(void)
{
    char data = 'a';
    char key = 0xff;
    char originaldata, lockdata;

    printf("������ ����=%c\n", data);

    lockdata = data ^ key;
    printf("��ȣȭ�� ����=%c\n", lockdata);

    originaldata =lockdata ^ key;
    printf("������ ����=%c\n", originaldata);

    return 0;
}