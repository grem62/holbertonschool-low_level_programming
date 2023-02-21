#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

	int main(void)
{
	int ch;

		for (ch = '0'; ch <= '9'; ch++)
		{
		putchar(ch);

			if (ch == '9')
				continue;
		putchar(',');
		putchar(' ');


		}
		putchar('\n');
	return (0);

}
