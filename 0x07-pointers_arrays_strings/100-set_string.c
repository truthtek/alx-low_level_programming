#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a given string.
 * @s: Pointer to a pointer to a char (the target pointer).
 * @to: Pointer to a char (the string to set the target pointer to).
 *
 * This function dynamically allocates memory for the target string and updates
 * the target pointer to point to the new string. It also frees the previous
 * memory to prevent memory leaks.
 */
void set_string(char **s, char *to)
{
*s = to;
}
