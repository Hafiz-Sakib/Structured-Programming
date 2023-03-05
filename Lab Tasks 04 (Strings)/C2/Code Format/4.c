#include <stdio.h>
int main()
{
    char s[100];
    char n[100];
    scanf("%[^\n]", s);
    int i = 0, c = 0, ok = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    int k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
        n[k] = s[j];
        k++;
    }
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != n[i])
        {
            ok = 0;
            break;
        }
    }
    if (ok)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
