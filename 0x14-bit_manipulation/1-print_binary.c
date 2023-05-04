#include "main.h"
#include <stdio.h>

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be represented in binary.
*
* Return: void.
*/


void print_binary(unsigned long int n)
{
int k, count = 0;
unsigned long int current;

for (k = 63; k >= 0; k--)
{
current = n >> k;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
{
_putchar('0');
}
}

if (!count)
{
_putchar('0');
}
}
