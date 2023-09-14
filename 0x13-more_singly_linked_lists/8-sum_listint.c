#include "lists.h"
/**
  * sum_listint - function that sum of all the data of the list
  * @head: pointer for the struct
  * Return: int , 0
  */
int sum_listint(listint_t *head)
{
	listint_t *trav;

	int sum = 0;

	trav = head;

	if (trav == NULL)
		return (0);
	while (trav != NULL)
	{
		sum += trav->n;
		trav = trav->next;
	}
	return (sum);
}
