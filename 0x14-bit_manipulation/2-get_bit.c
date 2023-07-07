#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specified index.
 * @n: The unsigned long int.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit (0 or 1) at the specified index,
 *         or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}