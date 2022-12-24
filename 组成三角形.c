#include <stdio.h>
int triangle_judge(int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1;
    else
        return 0;
}
int triangle_perimeter(int a, int b, int c)
{
    return a + b + c;
}
int MAX(int *a, int n)
{
    int i, maximum = 0;
    for (i = 0; i < n; i++)
    {
        if (*(a + i) > maximum)
            maximum = *(a + i);
    }
    return maximum;
}
int main()
{
    int n, i, j, k, *a, max = 0, temp, x;
    int b[3] = {2, 4, 10};
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (triangle_judge(*(a + i), *(a + j), *(a + k)))
                {
                    x = triangle_perimeter(*(a + i), *(a + j), *(a + k));
                    if (x > max)
                        max = x;
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}
