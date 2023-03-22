#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = "Abc", p[100] = "abc";
    // scanf("%[^\n]", s);
    // scanf("%[^\n]", p);
    int x = strcmp(s, p);
    printf("%d", x);
    return 0;
}