#include"lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of
 * a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *newHead = *head;

	if (newHead == NULL)
		return (-1);
	if (index == 0)
	{
		*head = newHead->next;
		if (newHead->next != NULL)
			newHead->next->prev = NULL;
		free(newHead);
		return (1);
	}
	i = 1;
	while (newHead)
	{
		if (i == index)
		{
			if (newHead->next == NULL)
				return (-1);
			newHead->prev->next = newHead->next;
			newHead->next->prev = newHead->prev;
			free(newHead);
			return (1);
		}
		newHead = newHead->next;
		i++;
	}
	return (-1);
}