#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src' to the buffer
 * pointed to by 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int t = -1;

	do {
		t++;
		dest[t] = src[t];

	} while (src[t] != '\0');

	return (strcpy);
}
