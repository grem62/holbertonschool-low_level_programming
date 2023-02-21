#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

	int main(void)
{
	int i;

	int ch;

		for (i = '0'; i <= '9'; i++)
		{
			putchar(i);
		}

		for (ch = 'a'; ch <= 'f'; ch++)
		{
			putchar(ch);
		}

	putchar('\n');

	return (0);
}
