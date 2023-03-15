#include <stdio.h>

/**
 * main - fonction to print the name of the program
 * @void: it takes not arguments
 * Return: 0
 */

int main(void)
{
	printf("%s\x0a", __FILE__);

	return (0);

}
