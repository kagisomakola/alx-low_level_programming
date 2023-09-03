#include "main.h"
/**
 * _isupper - Check parameter is a digit or character
 * @c: parameter
 * Return: 1 if it is a number or 0 is anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
