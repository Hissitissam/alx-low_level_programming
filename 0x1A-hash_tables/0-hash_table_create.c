#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;
	unsigned long int i;

	HashTable = malloc(sizeof(hash_table_t));
	if (HashTable == NULL)
		return (NULL);

	HashTable->size = size;
	HashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (HashTable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		HashTable->array[i] = NULL;

	return (HashTable);
}
