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
	dlistint_t *tmp = *head, *tmp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp2 = tmp->next;
		free(tmp);
		if (tmp2)
			tmp2->prev = NULL;
		*head = tmp2;
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			tmp2 = tmp->next;
			tmp->prev->next = tmp2;
			if (tmp2)
				tmp2->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
