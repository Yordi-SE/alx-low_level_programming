#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer
 * @n: int
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *d = malloc(sizeof(listint_t));

	if (d == NULL)
		return (NULL);
	d->next = *head;
	*head = d;
	(*head)->n = n;
	return (*head);
}
