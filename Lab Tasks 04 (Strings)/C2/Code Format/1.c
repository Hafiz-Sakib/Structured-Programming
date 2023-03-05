#include <stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]", s);
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s[i] -= 32;
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            s[i] += 32;
        }
        i++;
    }
    printf("%s", s);

    return 0;
}
