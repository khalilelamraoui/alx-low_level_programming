#ifndef LISTS_H
#define LISTS_H

#include<stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
/**
 * print_listint - Print all elements of a listint_t list
 * @h: A pointer to the listint_t list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h);

#endif
