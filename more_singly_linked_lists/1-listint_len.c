#include "lists.h"

/**
 * listint_len - return the number of nodes in a linked list
 * @h: pointer head
 *
 * Return: number of nodes in the linked list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h; i++)
		h = h->next;

	return (i);
}
