#include <stdio.h>
int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}