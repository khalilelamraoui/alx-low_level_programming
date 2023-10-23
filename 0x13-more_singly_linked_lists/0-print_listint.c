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
	const listint_t *ptr = h;
	
	ptr = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		printf("The list is empty!");
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
