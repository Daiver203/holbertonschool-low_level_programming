#include "lists.h"

/**
 * free_list - free the linked list
 * @head: pointer to start of linked list
 *
 * Return: none
*/

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
