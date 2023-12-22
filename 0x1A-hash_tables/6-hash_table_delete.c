#include "hash_tables.h"
/**
* hash_table_delete - function to delete the hash table
* @ht: hash table
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	hash_node_t *node, *node2;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			node2 = node;
			node = node->next;
			free(node2->value);
			free(node2->key);
			free(node2);
		}
	}
	free(ht->array);
	free(ht);
}
