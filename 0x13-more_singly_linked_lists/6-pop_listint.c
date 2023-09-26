#include "lists.h"

/**
 * pop_lisint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: if the linked list is empty return 0 else
 * he head node’s data (n).
 */
int pop_listsint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
