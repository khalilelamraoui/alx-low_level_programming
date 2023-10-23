#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list
 * @index: The index of the node to retrieve, starting at 0
 * Return: The nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int id = 0;

	while (head != NULL)
	{
		if (id == index)
			return (head);
		head = head->next;
		id++;
	}
	return (NULL);
}
