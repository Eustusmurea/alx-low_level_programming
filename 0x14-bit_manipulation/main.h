#ifndef MAIN_H
#define MAIN_H

/*
 * Function:  binary_to_uint
 * --------------------
 * Converts a binary string to an unsigned integer.
 *
 * b: A pointer to the binary string.
 *
 * returns: The converted unsigned integer value.
 */

unsigned int binary_to_uint(const char *b);
/*
 * Function:  print_binary
 * --------------------
 * Prints the binary representation of a given unsigned long int.
 *
 * n: The unsigned long int to be printed in binary.
 *
 * returns: void
 */

void print_binary(unsigned long int n);
/*
 * Function:  get_bit
 * --------------------
 * Gets the value of a bit at a specified index.
 *
 * n: The unsigned long int.
 * index: The index of the bit to get.
 *
 * returns: The value of the bit (0 or 1).
 */

int get_bit(unsigned long int n, unsigned int index);

/*
 * Function:  get_bit
 * --------------------
 * Gets the value of a bit at a specified index.
 *
 * n: The unsigned long int.
 * index: The index of the bit to get.
 *
 * returns: The value of the bit (0 or 1).
 */

int set_bit(unsigned long int *n, unsigned int index);

/*
 * Function:  set_bit
 * --------------------
 * Sets the value of a bit at a specified index to 1.
 *
 * n: A pointer to the unsigned long int.
 * index: The index of the bit to set.
 *
 * returns: 1 if successful, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index);

/*
 * Function:  clear_bit
 * --------------------
 * Sets the value of a bit at a specified index to 0.
 *
 * n: A pointer to the unsigned long int.
 * index: The index of the bit to clear.
 *
 * returns: 1 if successful, -1 otherwise.
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m);
/*
 * Function:  flip_bits
 * --------------------
 * Counts the number of bits that need to be flipped to convert
 * one unsigned long int to another.
 *
 * n: The first unsigned long int.
 * m: The second unsigned long int.
 *
 * returns: The number of bits to flip.
 */

int _atoi(const char *s);

/*
 * Function:  _atoi
 * --------------------
 * Converts a string to an integer.
 *
 * s: A pointer to the string.
 *
 * returns: The converted integer value.
 */

int _putchar(char c);


/*
 * Function:  _putchar
 * --------------------
 * Writes a character to the standard output.
 *
 * c: The character to be written.
 *
 * returns: On success, the character written. On error, -1.
 */

int get_endianness(void);

/*
 * Function:  get_endianness
 * --------------------
 * Checks the endianness of the machine.
 *
 * returns: 0 if big endian, 1 if little endian.
 */

#endif
