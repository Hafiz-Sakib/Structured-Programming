#include <stdio.h>

int main()
{
    char string[100], replace_char, new_char;
    int i, first_occurrence = -1, last_occurrence = -1;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    printf("Enter a character to replace: ");
    scanf("%c", &replace_char);

    printf("Enter the new character: ");
    scanf("%c", &new_char);

    // Find the index of the first and last occurrence of the character to replace
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == replace_char)
        {
            if (first_occurrence == -1)
            {
                first_occurrence = i;
            }
            last_occurrence = i;
        }
    }

    // Replace the first occurrence of the character
    if (first_occurrence != -1)
    {
        string[first_occurrence] = new_char;
    }

    // Replace the last occurrence of the character
    if (last_occurrence != -1 && last_occurrence != first_occurrence)
    {
        string[last_occurrence] = new_char;
    }

    printf("Modified string: %s", string);

    return 0;
}
