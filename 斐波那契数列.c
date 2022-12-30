#include <stdio.h>
long long Fibonacci(long long n)
{
    if ((n == 1) || (n == 2))
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{ 
    long long n;
    scanf("%lld", &n);
    printf("%lld", Fibonacci(n) % 10007);
    return 0;
}