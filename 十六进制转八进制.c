#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char a[100][100], b[100][100]; //����������ά���飬��ʾ�ַ���
    int i, j, m, k;
    long long n = 0;
    scanf_s("%d", &m);
    for (k = 0; k < m; k++) //Ҫ����m�е�ʮ������
    {
        scanf_s("%s", a[k]);
        for (i = 0; a[k][i] != '\0'; i++) //ʮ������תʮ���ƣ�\0���ַ��������ı�־
        {
            if (a[k][i] >= 'A' && a[k][i] <= 'F') //��ʮ�����Ƶ���ĸתΪ���ַ������
                a[k][i] = (a[k][i] - 'A') + 10 + '0';
            n += ((a[k][i] - '0') * (pow(16, strlen(a[k]) - 1 - i))); //תʮ����
        }
        for (j = 0;; j++) //ʮ����תΪ�˽��Ʋ���������B��
        {
            b[k][j] = n % 8;
            n = n / 8;
            if (n == 0)
            {
                break;
            }
        }
    }
    for (k = 0; k < m; k++) //����˽���
    {
        for (j = strlen(b[k]) - 1; j >= 0; j--) //�Ӻ���ǰ�������
        {
            printf("%d", b[k][j]);
        }
        printf("\n");
    }
    return 0;
}