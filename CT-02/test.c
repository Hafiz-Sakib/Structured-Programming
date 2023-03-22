#include <stdio.h>

int my_strcmp(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return (str1[i] - str2[i]);
    }
}

int main()
{
    char s[100], p[100];
    scanf("%[^\n]", s);
    scanf("%[^\n]", p);
    int result = my_strcmp(s, p);
    printf("%d", result);
    return 0;
}