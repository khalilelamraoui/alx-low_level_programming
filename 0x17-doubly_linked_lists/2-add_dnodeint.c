#include"lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head of the list
 * @n: Value of the new node
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
