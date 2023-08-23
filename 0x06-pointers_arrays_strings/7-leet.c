#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int t, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[t] == s1[x])
			{
				n[t] = s2[x];
			}
		}
	}
	return (n);
}
