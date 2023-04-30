#include <stdio.h>

int main(void)
{
    char data = 'a';
    char key = 0xff;
    char originaldata, lockdata;

    printf("원래의 문자=%c\n", data);

    lockdata = data ^ key;
    printf("암호화된 문자=%c\n", lockdata);

    originaldata =lockdata ^ key;
    printf("복원된 문자=%c\n", originaldata);

    return 0;
}