#include "lists.h"

/**
 *dlistint_len - fonction return number of an element
 *@h: node
 *Return: counter
*/
	size_t dlistint_len(const dlistint_t *h)

{
		size_t counter = 0;

		while (h != 0)
		{
		h = h->next;
		counter++;
		}

		return (counter);
}
