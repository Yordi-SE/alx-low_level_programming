#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *s = *head;

	listint_t *m;

	*head = NULL;
	while
		(s != NULL) {
			m = s;
			s = s->next;
			free(m);
		}
}
