#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to adress of head
 * @n: new element
 *
 * Return: the address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*new);
}
