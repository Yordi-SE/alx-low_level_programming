#include "lists.h"
/**
 * add_node - adds a new node at the begining of a list_t list
 * @head: pointer to pointer
 * @str: pointer to string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	list_t *first;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);
	first->next = *head;
	*head = first;
	(*head)->str = strdup(str);
	first = first->next;
	while
		((*head)->str[i] != '\0')
			i++;
	(*head)->len = i;
	return (first);
}
