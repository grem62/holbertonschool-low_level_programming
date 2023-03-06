#include "main.h"

/**
 * find_root - focntion auxiliaire
 * @n: racine a calculer
 * @root: le carré
 *
 * Return: return -1
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - trouver la racine carré d'un nombre
 * @n: character
 *
 * Return: result de la racine
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
