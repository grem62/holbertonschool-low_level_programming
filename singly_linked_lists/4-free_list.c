#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_list - fonction free all list
 *@head: head of the chaine
*/

void free_list(list_t *head)

{

list_t *tmp = NULL;
while (head)
{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
