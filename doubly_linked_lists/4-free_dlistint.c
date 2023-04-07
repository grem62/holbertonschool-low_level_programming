#include "lists.h"

/**
 *free_dlistint - fontion free the memory of head
 *@head: head of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (!head)
	{

	*tmp = *head->next;
	free(head->next);
	free(head->prev);
	free(head);
	head = tmp;
	}
}
