#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int i;

	listint_t *h;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;
	return (i);
}
