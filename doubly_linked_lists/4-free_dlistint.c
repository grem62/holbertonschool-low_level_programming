#include "lists.h"

/**
 *free_list - fonction free all lists
 *@head: head of the chaine
*/

void free_list(list_t *head)

{
	list_t *current;

	current = head;

	list_t *new;

	while (current)
	{
	current = new->next;
	free(current);
	}
}
