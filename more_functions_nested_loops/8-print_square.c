#include "main.h"

/**
 * print_square - function that prints a square
 *@size: character
**/
void print_square(int size)

{
		int c;
		int l;
	if (size > 0)
	{
		for (c = 1; c <= size; c++)
			{
			for (l = 1; l <= size; l++)
				{
				_putchar('#');
				}
				_putchar('\n');
			}
	}
		else
		{

			_putchar('\n');
		}
}
