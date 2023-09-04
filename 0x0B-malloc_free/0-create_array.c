#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 *                with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: An Array Initialized with the specific char
 */

char *create_array(unsigned int size, char c)
{
    if (size == 0)
{
return (NULL);
}
char *array = malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
    
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}