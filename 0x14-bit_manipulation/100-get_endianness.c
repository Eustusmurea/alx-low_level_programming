#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * This function determines the endianness of the machine by checking the value of the first byte in an unsigned int.
 * It works by creating an unsigned int variable and accessing its first byte using a char pointer.
 * The value of the first byte is then returned.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}