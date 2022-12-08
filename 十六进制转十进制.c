#include <stdio.h>
#include <string.h>
#include <math.h>
int A_to_F__number(char n) //将十六进制的A至F转为数字
{
    if (n >= '0' && n <= '9')
        return n - 48;
    else
        return n - 'A' + 10;
}
int main()
{
    char a[100];
    long long b;
    int i;
    scanf("%s", a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b += A_to_F__number(a[i]) * pow(16, i);
    }

    printf("%lld", b);
    return 0;
}