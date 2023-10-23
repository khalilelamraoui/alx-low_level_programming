#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer data for the new node
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
