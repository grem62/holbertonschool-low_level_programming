#include "lists.h"


/**
 *print_dlistint - fonction who print all in dlistint
 *@h: pointeur
 *Return: Return counter
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
