#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[100][100], b[100][100]; //定义两个二维数组，表示字符串
    int i, j, m, k;
    long long n = 0;
    scanf_s("%d", &m);
    for (k = 0; k < m; k++) //要输入m行的十六进制
    {
        scanf_s("%s", a[k]);
        for (i = 0; a[k][i] != '\0'; i++) //十六进制转十进制，\0是字符串结束的标志
        {
            if (a[k][i] >= 'A' && a[k][i] <= 'F') //将十六进制的字母转为数字方便计算
                a[k][i] = (a[k][i] - 'A') + 10 + '0';
            n += ((a[k][i] - '0') * (pow(16, strlen(a[k]) - 1 - i))); //转十进制
        }
        for (j = 0;; j++) //十进制转为八进制并存入数组B中
        {
            b[k][j] = n % 8;
            n = n / 8;
            if (n == 0)
            {
                break;
            }
        }
    }
    for (k = 0; k < m; k++) //输出八进制
    {
        for (j = strlen(b[k]) - 1; j >= 0; j--) //从后往前倒着输出
        {
            printf("%d", b[k][j]);
        }
        printf("\n");
    }
    return 0;
}