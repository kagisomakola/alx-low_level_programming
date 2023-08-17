#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @c: Input character
 * Return: 1 for upper letter or 0 for anything else
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
