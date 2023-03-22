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
    char str1[] = "hello";
    char str2[] = "world";
    int result = my_strcmp(str1, str2);
    if (result == 0)
    {
        printf("The two strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("String 1 is less than string 2.\n");
    }
    else
    {
        printf("String 1 is greater than string 2.\n");
    }

    return 0;
}