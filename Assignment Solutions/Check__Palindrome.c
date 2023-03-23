#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%[^\n]", s);
    int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    int j = 0, ok = 1;
    for (int i = len - 1; i > len / 2; i--)
    {
        if (s[i] != s[j])
        {
            ok = 0;
            break;
        }
        j++;
    }
    if (ok == 1)
    {
        printf("Palindrome String\n");
    }
    else
    {
        printf("Not a Palindrome String\n");
    }
    return 0;
}