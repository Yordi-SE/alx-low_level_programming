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
	if (str == NULL)
	{
		(*head)->str = NULL;
		(*head)->len = 0;
	}
	else
	{
		(*head)->str = strdup(str);
		while
			((*head)->str[i] != '\0')
				i++;
		(*head)->len = i;
	}
	first = first->next;
	return (first);
}
