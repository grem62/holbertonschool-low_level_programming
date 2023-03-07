#include "main.h"

/**
 *is_find_number -fonction
 *@n: character
 *Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
	return (0);

		return (1);

}
