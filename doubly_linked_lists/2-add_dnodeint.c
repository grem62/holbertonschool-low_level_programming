#include "lists.h"

/**
 *add_dnodeint - function add a node begining of the list
 *@head: head of the lists
 *Return: return new nodes
 *@n: value
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes;

	if (head == NULL)
		return (NULL);

	new_nodes = malloc(sizeof(dlistint_t));

	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;
	new_nodes->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_nodes;
	*head = new_nodes;

	return (new_nodes);
}
