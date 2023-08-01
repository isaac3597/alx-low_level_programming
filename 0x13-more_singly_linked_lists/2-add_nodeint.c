#include "lists.h"

/**
 * add_nodeint - It adds a new node.
 * @head: The pointer to the first node.
 * @n: The data to insert in that new node.
 *
 * Return: The pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

