#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 * Return: 1 if c is a separator, 0 otherwise.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i] != '\0'; i++)
    {
        if (separators[i] == c)
            return 1;
    }
    return 0;
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int capitalize_next = 1;

    while (*ptr != '\0')
    {
        if (is_separator(*ptr))
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
        {
            *ptr = *ptr - ('a' - 'A'); // Convert to uppercase
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }
        ptr++;
    }

    return str;
}
