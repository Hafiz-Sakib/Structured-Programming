/*
Name : Hafiz Sakib
Id : 0222210005101118

*/

// Problem : Write a C Program to Count the words in  a string

#include <stdio.h>
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
            while (s[i] == ' ')
            {
                i++;
            }
        }
        i++;
    }
    printf("%d", c);
    return 0;
}
