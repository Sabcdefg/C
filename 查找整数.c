#include <stdio.h>
int find_int_number(int *a, int n, int b) //*a是要去寻找数的数组，n是数组的长度，b是要找的数，返回b的位置
{
    int i, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) == b)
        {
            flag = i;
            return flag + 1;
            break;
        }
    }
    return -1;
}
int main()
{
    int n, *a, b, i;
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", a + i);
    }
    scanf_s("%d", &b);
    printf("%d", find_int_number(a, n, b));
    return 0;
}