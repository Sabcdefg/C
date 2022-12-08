#include <stdio.h>
long long Factorial(long long n) // ½×³Ëlong long
{
    long long a = 1, i;
    for (i = 1; i <= n; i++)
    {
        a = a * i;
    }
    if (n == 0)
        return 1;
    else
        return a;
}
long long combinatorial_number(long long n, long long m) // ×éºÏÊý
{
    return Factorial(n) / (Factorial(n - m) * Factorial(m));
}
int main()
{
    long long n, i, j;
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%lld ", combinatorial_number(i, j));
        }
        printf("\n");
    }
    return 0;
}