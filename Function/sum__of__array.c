#include <stdio.h>
int SUM(int x[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    return sum;
}
int main()
{
    int n, a[10000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = SUM(a, n);
    printf("%d", sum);
    return 0;
}