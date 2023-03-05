#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%[^\n]", s);
    int i = 0, c = 1;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            c++;
        }
        i++;
    }
    printf("%d", c);

    return 0;
}
