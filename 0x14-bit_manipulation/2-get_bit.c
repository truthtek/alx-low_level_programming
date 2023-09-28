#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints digits
 *
 * Description: prints digits
 *
 * @n: integer to print
 * @index: index integer
 *
 * Return: return 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index) {
    if (index >= (sizeof(unsigned long int) * 8)) {
        return -1;  // Error: index out of range
    }

    unsigned long int mask = 1UL << index;
    int bit_value = (n & mask) ? 1 : 0;

    return bit_value;
}

int main() {
    unsigned long int num = 10;  // Binary: 1010
    int index = 2;  // Bit index to retrieve
    
    int bit_value = get_bit(num, index);

    if (bit_value != -1) {
        printf("The bit value at index %d is: %d\n", index, bit_value);
    } else {
        printf("Error: Index out of range.\n");
    }

    return 0;
}
