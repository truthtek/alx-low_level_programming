#include "main.h" 

/**
 * flip_bits - Returns the number of bits to flip to get 
 *             from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits needed to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int diff = n ^ m;
  unsigned int count = 0;

  while (diff > 0) {
    count += (diff & 1);
    diff >>= 1; 
  }

  return count;
}