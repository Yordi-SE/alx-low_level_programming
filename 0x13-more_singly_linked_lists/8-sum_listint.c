#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	listint_t *s = head;

	while
		(s != NULL) {
			n = n + s->n;
			s = s->next;
		}
	return (n);
}
