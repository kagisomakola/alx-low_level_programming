#include "main.h"
#include <string.h>
/**
 * _strncat -concatenate 2 strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: inputt value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int t;
	int x;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[t] = src[x];
	t++;
	x++;
	}
	dest[t] = '\0';
	return (dest);
}
	
