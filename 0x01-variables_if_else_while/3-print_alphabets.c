#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 */

int main(void)
{
	char low_char, upper;

	low_char = 'a', upper = 'A';

	while (low_char <= 'z')
	{
		putchar(low_char);
		low_char++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
