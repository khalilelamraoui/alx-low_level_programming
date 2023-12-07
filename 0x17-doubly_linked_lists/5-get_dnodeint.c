#include"lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the node at index or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *currentNode;

	if (head == NULL)
		return (NULL);
	currentNode = head;
	for (i = 0; i < index; i++)
	{
		if (currentNode->next == NULL)
			return (NULL);
		currentNode = currentNode->next;
	}
	return (currentNode);
}
