#include"lists.h"
/**
 * listint_len - Print number of elements of a listint_t list
 * @h: A pointer to the listint_t list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
