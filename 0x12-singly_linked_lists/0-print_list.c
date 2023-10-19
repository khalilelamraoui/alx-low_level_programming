#include <stdio.h>
#include "lists.h"  // Assuming you have a header file for your list structure

size_t print_list(const list_t *h)
{
    size_t count = 0;  // Initialize a counter to keep track of the number of nodes

    while (h != NULL) {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        h = h->next;  // Move to the next node
        count++;      // Increment the count
    }

    return (count);  // Return the number of nodes
}