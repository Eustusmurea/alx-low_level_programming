#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a specified index to 0.
 * @n: A pointer to the unsigned long int.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}