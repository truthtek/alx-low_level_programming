#include "main.h"
/**
* get_endianness - Checks the endianness of the machine.
*
* Return: 1 if little endian, 0 if big endian.
*/
int get_endianness(void)
{
unsigned int x = 0x76543210;
char *c = (char *)&x;
if (*c == 0x10)
return (1);
return (0);
}
