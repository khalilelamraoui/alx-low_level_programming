#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
