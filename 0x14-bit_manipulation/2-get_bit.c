#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit__val;

	if (index > 63)
		return (-1);

	bit__val = (n >> index) & 1;

	return (bit_val);
}
