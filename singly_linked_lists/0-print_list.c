#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - fonction print list link
 *@h: hader of const list_t
 *Return: return count who is the number of node
*/


size_t print_list(const list_t *h)
{

size_t count = 0;

while (h != 0)
{
if (h->str == NULL)

printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);

}
