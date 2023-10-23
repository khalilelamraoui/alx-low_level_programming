#include"lists.h"
/**
 * print_listint - Print all elements of a listint_t list
 * @h: A pointer to the listint_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
