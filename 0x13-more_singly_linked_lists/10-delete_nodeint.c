#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked
 * @head: pointer ot pointer
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *s;

	listint_t *h;

	listint_t *u;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		s = (*head)->next;
		free(*head);
		*head = s;
		return (1);
	}
	h = get_nodeint_at_index(*head, index);
	u = get_nodeint_at_index(*head, index - 1);
	if (h == NULL)
		return (-1);
	u->next = h->next;
	free(h);
	return (1);
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
