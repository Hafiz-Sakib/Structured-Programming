/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Write a C Program to check a string palindrome or not.

#include <stdio.h>
int main()
{
    char s[100];
    char n[100];
    scanf("%[^\n]", s);
    int i = 0, len = 0, ok = 1;
    while (s[i] != '\0')
    {
        i++;
    }
    len = i - 1;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != s[len])
        {
            ok = 0;
            break;
        }
        else if (i == (len / 2))
        {
            break;
        }
        i++;
        len--;
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
