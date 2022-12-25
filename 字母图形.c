#include <stdio.h>
void positive_sequence_print(int n) // 从第1个字母开始顺序输出，直至第n个
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", 'A' + i);
    }
}
void reverse_order_print(int n) // 从第n个字母开始逆序输出，直至B
{
    int i;
    for (i = n; i >= 1; i--)
    {
        printf("%c", 'A' + i);
    }
}
int main()
{
    int n, m; // n为行数，m为列数
    int i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) // 行遍历
    {
        reverse_order_print(i);
        positive_sequence_print(m - i);
        printf("\n");
    }
    return 0;
}