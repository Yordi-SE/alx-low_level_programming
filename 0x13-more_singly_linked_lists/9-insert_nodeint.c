#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: index
 * @n: int
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s;

	listint_t *h;

	listint_t *u;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);
	s->n = n;
	if (*head == NULL)
	{
		*head = s;
		return (*head);
	}
	h = get_nodeint_at_index(*head, idx);
	u = get_nodeint_at_index(*head, idx - 1);
	if (h == NULL)
		return (NULL);
	u->next = s;
	s->next = h;
	return (s);
}
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: index of the node
 * Return: listint_t *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *s = head;

	if (head == NULL)
		return (NULL);
	while
		(i < index) {
			if (s == NULL)
				return (NULL);
			s = s->next;
			i++;
		}
	return (s);
}
