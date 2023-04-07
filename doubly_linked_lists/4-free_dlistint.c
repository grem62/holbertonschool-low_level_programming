#include "lists.h"

/**
 *free_list - fonction free all lists
 *@head: head of the chaine
*/

void free_dlistint(dlistint_t *head)

{
	dlistint_t *current = head;

	while (current)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
