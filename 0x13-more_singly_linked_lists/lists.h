#ifndef LIST
#define LIST

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_list(const list_t *h);
size_t print_listint(const listint_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
int string_length(const char *pointer);
list_t *add_node_end(list_t **head, const char *str);

#endif /*LIST*/
