#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	ptr = *head;
	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
		*head = NULL;
	}
}
