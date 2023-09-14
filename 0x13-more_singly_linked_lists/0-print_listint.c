#include "lists.h"
/**
  * print_listint - function print all elements of a listint_t list
  * @h: pointer to the struct
  * Return: the length of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
