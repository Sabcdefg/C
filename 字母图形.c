#include <stdio.h>
void positive_sequence_print(int n) // �ӵ�1����ĸ��ʼ˳�������ֱ����n��
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", 'A' + i);
    }
}
void reverse_order_print(int n) // �ӵ�n����ĸ��ʼ���������ֱ��B
{
    int i;
    for (i = n; i >= 1; i--)
    {
        printf("%c", 'A' + i);
    }
}
int main()
{
    int n, m; // nΪ������mΪ����
    int i;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++) // �б���
    {
        reverse_order_print(i);
        positive_sequence_print(m - i);
        printf("\n");
    }
    return 0;
}