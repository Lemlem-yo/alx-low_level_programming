#include "lists.h"
/**
  * free_list - function frees a list_t list
  * @head: pointer for the first node
  */
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
