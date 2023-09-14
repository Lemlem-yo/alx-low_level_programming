#include "lists.h"
/**
  * free_listint2 - function that free a listint_t in list
  * @head: pointer of pointer for the struct
  */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		*head = (**head).next;

		free(ptr);

		ptr = *head;
	}
	*head = NULL;
}
