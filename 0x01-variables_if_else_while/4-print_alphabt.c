#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */

int main(void)
{
	char low_char;

	low_char = 'a';

	while (low_char <= 'z')
	{
		if (low_char != 'q' && low_char != 'e')
		{
			putchar(low_char);
		}
		low_char++;
	}

	putchar('\n');

	return (0);
}
