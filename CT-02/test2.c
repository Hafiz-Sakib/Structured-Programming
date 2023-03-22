/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Write a C Program that works like strcmp function!

#include <stdio.h>

int my_cmp(char a[], char b[])
{
    int i = 0;
    while (a[i] == b[i])
    {
        if (a[i] == '\0' || b[i] == '\0')
        {
            break;
        }
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
    {
        return 0;
    }
    else if (a[i] > b[i])
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char s[100], p[100];
    gets(s);
    gets(p);
    int result = my_cmp(s, p);
    printf("%d", result);
    return 0;
}