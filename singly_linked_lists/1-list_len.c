#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - fonction count element in a list
 *@h: array of the list
 *Return: return counter
*/

size_t list_len(const list_t *h)

{

size_t counter = 0;

while (h != NULL)
{
	h = h->next;
	counter++;
	}
	return (counter);
}
