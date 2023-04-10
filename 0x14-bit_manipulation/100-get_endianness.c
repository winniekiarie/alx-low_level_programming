#include "main.h"
#include "math.h"

/**
* get_endianness - sets the value of a bit to 1 at a given index
* Return: 1 if little endian 0 if big endian
*/
int get_endianness(void)
{
unsigned int p = 1;
char *m = (char *)&i;

if (*p)
return (1);
return (0);
}
