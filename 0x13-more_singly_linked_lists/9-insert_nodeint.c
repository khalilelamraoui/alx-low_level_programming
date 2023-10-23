#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added, starting at 0
 * @n: The integer data for the new node
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = ptr->next;
	ptr->next = node;
	return (node);
}
