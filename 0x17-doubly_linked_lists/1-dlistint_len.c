#include"lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t counter = 0;

    while (h != NULL)
    {
        h = h->next;
        counter++;
    }
    return (counter);
}
