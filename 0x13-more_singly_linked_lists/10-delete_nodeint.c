#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}

		prev = current;
		current = current->next;
		count++;
	}

	return (-1);
}
