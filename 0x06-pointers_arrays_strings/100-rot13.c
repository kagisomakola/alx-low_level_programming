#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */
char *rot13(char *s)
{
	int t;
	int x;
	char datal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (t = 0; s[t] != '\0'; t++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[t] == datal[x])
			{
				s[t] = datarot[x];
				break;
			}
		}
	}
	return (s);
}
