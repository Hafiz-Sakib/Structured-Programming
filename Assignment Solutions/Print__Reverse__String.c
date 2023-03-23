#include <stdio.h>
int main()
{
    char s[1000];
    scanf("[^\n]", s);
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    printf("%d", i);
    return 0;
}