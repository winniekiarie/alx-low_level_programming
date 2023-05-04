#include "main.h"

/**
* set_bit - Sets a bit at a given index to 1.
* @n: Pointer to the number to change.
* @index: Index of the bit to set to 1.
*
* Return: 1 for success, -1 for failure.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
{
return (-1);
}
else
{
*n |= (1 << index);
return (1);
}
}
