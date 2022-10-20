#include "lists.h"
/**
  * list_len - function that returns the number of elements in linked
  * @h: pointer for struct list_t
  * Return: number of the linked
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

