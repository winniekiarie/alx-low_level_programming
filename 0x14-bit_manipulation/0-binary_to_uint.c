#include "main.h"
#include <stdlib.h>

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @k: A pointer to a string of 0 and 1 chars.
*
* Return: The converted number, or 0 if there is one or more chars in the
* string k that is not 0 or 1, or b is NULL.
*/
unsigned int binary_to_uint(const char *k)
{
unsigned int result = 0;
const char *ptr;

if (k == NULL)
return (0);

for (ptr = k; *ptr != '\0'; ptr++)
{
if (*ptr != '0' && *ptr != '1')
return (0);
result = result * 2 + (*ptr - '0');
}

return (result);
}
