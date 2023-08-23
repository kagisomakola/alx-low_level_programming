#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int x;

	t = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		t++;
		x++;
	}
	dest[t] = '\0';
	return (dest);
}
