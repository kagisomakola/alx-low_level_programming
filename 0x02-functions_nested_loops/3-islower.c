#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @C: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int C)

{

	if (C >= 97 && C <= 122)
	{

	return (1);
	}
	return (0);

}
