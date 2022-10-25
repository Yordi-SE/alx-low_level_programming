#include "lists.h"
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
