#include "lists.h"
#include <string.h>
/**
  * add_node_end - function adds a new node at the end
  * @head: pointer of pointer for the first node
  * @str: pointer of the new node that add to the end
  * Return: NULL
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *ptr;

	size_t i;

	i = 0;

	ptr = *head;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);
	while (str[i] != 0)
	{
		i++;
	}
	tmp->str = strdup(str);
	tmp->len = i;
	if (ptr == NULL)
		*head = tmp;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (*head);

}
