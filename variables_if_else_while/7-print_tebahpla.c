#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

	int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
