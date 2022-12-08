#include <stdio.h>
int sum(int n)

{
    if (!n)
        return 0;
    else
        return n + sum(n - 1);
}
int main()
{
    int n;
    scanf_s("%d", &n);
    printf("%d", sum(n));
    return 0;
}