#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer ot pointer
 * @n: int
 * Return: structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *d = malloc(sizeof(listint_t));

	listint_t *s = *head;

	if (d == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = d;
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}

	while
		(s->next != NULL) {
			s = s->next;
		}
	s->next = d;
	d->n = n;
	d->next = NULL;
	return (d);
}
