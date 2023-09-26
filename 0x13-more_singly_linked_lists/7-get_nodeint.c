#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index i;
 * @head: pointer to first node in the lined list
 * @index: index of the node to return
 *
 * Return: pointer to the specific node else
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
