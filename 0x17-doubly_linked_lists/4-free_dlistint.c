#include"lists.h"
/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head->prev)
		head = head->prev;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
