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
/**
 * listint_len - Print number of elements of a listint_t list
 * @h: A pointer to the listint_t list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h);
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer data for the new node
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: The integer data for the new node
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head);
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to a pointer to the head of the list
 */
void free_listint2(listint_t **head);
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head node's data (n).
 * @head: A pointer to a pointer to the head of the list
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head);
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list
 * @index: The index of the node to retrieve, starting at 0
 * Return: The nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list
 * Return: The sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head);

#endif
