#include "lists.h"
/**
 * add_node - adds a new node at the begining of a list_t list
 * @head: pointer to pointer
 * @str: pointer to string
 * Return: pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;

	first = (list_t *) malloc(sizeof(list_t));
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
		(*head)->len = string_length(str);
	}
	return (*head);
}
/**
  * string_length - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int string_length(const char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
