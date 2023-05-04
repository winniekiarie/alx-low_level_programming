#include "main.h"

/**
* get_bit - Returns the value of a bit at an index in a decimal number.
* @n: The number to search.
* @index: The index of the bit.
*
* Return: The value of the bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val = -1;

if (index <= 63)
{
unsigned long int mask = 1;
mask = mask << index;
bit_val = (n & mask) != 0;
}

return (bit_val);

}
