#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

	int main(void)

{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)

	putchar(ch);
	putchar('\n');

	return (0);
}
