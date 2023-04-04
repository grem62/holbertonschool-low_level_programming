#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 *add_node - fonction who add a node
 *@str: string of a node
 *Return: return node
 *@head: start of link
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;

	if (!(head && str))
		return (NULL);



	new_node = malloc(sizeof(list_t));

			if (!new_node)
				return (NULL);

	for (i = 0; str[i]; i++)
	{}

			new_node->str = strdup(str);

			if (!(new_node->str))
		{
				free(new_node);

				return (NULL);
		}

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

		return (new_node);
}

