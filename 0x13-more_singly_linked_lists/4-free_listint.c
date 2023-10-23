#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
