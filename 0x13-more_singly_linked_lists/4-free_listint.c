#include "lists.h"
/**
  * free_listint - function that frees a listint_t list
  * @head: pointer of struct
  */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		head = head->next;

		free(ptr);
		ptr = head;
	}
}
