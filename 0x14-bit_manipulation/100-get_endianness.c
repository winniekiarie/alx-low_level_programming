#include "main.h"

/**
 * get_endianness - check the endianness of system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int p;
	char *t;

	p = 1;
	t = (char *)&p;
	return (*t);
}
