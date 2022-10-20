#include "lists.h"
/**
 * print_list - print the number of nodes in list_t
  * @h: pointer of the struct
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	h = h->next;
	counter++;
	}
	return (counter);
}
