#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include "string.h"
/**
 *add_node_end - function add nod at the end
 *@head: head of chaine
 *@str: string in a node
 *Return: return node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
		}
		else
		{

	list_t *last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	}
	return (new_node);
}
