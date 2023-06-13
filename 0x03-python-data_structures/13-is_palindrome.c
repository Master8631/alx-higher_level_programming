/**
 * is_palindrome - checks if a singly linked listint_t is a palindrome.
 * @head: a pointer to a pointer to the first node in the list
 *
 * Return: 0 if list is not a palindrome, 1 if it is a palindrome.
 */
int is_palindrome(listint_t **head)
{
	int len;
	int mid;
	listint_t *head_a, *head_b, *headb_cpy;

	if (head == NULL)
		return (0);

	len = list_len(*head);
	if (len <= 1)
		return (1);

	mid = (len % 2 == 0) ? (len / 2) : (len / 2) + 1;

	head_b = *head;
	for (; mid > 0; mid--)
		head_b = head_b->next;

	reverse_list(&head_b);

	headb_cpy = head_b;
	head_a = *head;
	while (head_cpy)
	{
		if (headb_cpy-> != head_a->n)
		{
			reverse_list(&head_b);
			return (0);
		}

		headb_cpy = headb_cpy->next;
		head_a = head_a->next;
	}
	
	reverse_list(&head_b);
	return (1);
}
