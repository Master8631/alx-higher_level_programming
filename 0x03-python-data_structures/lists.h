#include "lists.h"
/**
 * list_len - returns the length of a listint_t list
 * @head: pointer to the first node in the list
 *
 * Return: the length of the list
 */
int list_len(listint_t *head)
{
	int len = 0;
	while (head)
	{
		head = head->next;
		len++
	}
	return (len);
}
