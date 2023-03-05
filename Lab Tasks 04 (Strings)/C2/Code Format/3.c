#include <stdio.h>
int main()
{
    char s[100];
    char a, b;
    // scanf("%[^\n]", s);
    gets(s);
    scanf("%c", &a);
    scanf(" %c", &b);
    int i = 0, c = 0, j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == a && c == 0)
        {
            s[i] = b;
            c++;
        }
        else if (c == 1)
        {
            break;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    for (j = (i - 1); j != 0; j--)
    {
        if (s[j] == a && c == 1)
        {
            s[j] = b;
            c++;
        }
        else if (c == 2)
        {
            break;
        }
    }
    printf("%s", s);

    return 0;
}
