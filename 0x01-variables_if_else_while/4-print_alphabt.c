#include <stdio.h>
/**
 * main - Entry point
 * Return: Always zero (success)
 */

int main(void)
{
	char C;

	C = 'a';
	while
		(C <= 'z') {
			if ((C != 'q' && C != 'e') && C <= 'z')
				putchar(C);
			C++;

		}
	putchar('\n');
	return (0);
}


