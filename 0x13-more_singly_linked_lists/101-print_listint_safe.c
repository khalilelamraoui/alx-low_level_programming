#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list and handles cycles safely.
 * @head: A pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
		if (count > 100)
		{
			printf("Error: Detected an infinite loop in the list\n");
			exit(98);
		}
	}
	return (count);
}
