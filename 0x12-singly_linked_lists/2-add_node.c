#include "lists.h"
#include <string.h>
/**
  * add_node - add new node at the beginning of the list
  * @head: pointer of pointer for the struct
  * @str: new data for the new node
  * Return: NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	size_t count = 0;

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[count] != 0)
	{
		count++;
	}
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
