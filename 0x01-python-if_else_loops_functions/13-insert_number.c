#include "lists.h"

/**
 * insert_node - A function that inserts a number into a
 * sorted singly-linked list.
 * @head: linked list head pointer.
 * @number: insert number.
 * Return: 0 (fails) or 1 (success)
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
