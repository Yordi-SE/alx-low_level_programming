#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *s;

	while
		(*head != NULL) {
			s = *head;
			*head = (*head)->next;
			free(s);
		}
	*head = NULL;
}
