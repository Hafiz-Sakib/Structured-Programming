#include <stdio.h>
int main()
{
    char s[1000], p[1000];
    scanf("%[^\n]", s);
    getchar();
    scanf("%[^\n]", p);
    int i = 0, j = 0, ok = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        j = 0;
        while (s[i + j] == p[j])
        {
            j++;
            if (p[j] == '\0')
            {
                ok = 1;
                break;
            }
        }
        if (ok)
        {
            break;
        }
    }

    if (ok)
    {
        printf("'%s' is a Substring of '%s'\n", p, s);
    }
    else
    {
        printf("'%s' is not a Substring of '%s'\n", p, s);
    }

    return 0;
}