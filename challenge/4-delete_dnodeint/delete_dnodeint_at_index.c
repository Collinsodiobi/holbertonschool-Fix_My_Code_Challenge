#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	saved_head = *head;
	i = 0;
	while (i < index && *head != NULL)
	{
		*head = (*head)->next;
		i++;
	}
	if (i != index || *head == NULL)
	{
		*head = saved_head;
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(saved_head);
		return (1);
	}
	(*head)->prev->next = (*head)->next;
	if ((*head)->next != NULL)
		(*head)->next->prev = (*head)->prev;
	tmp = *head;
	*head = saved_head;
	free(tmp);
	return (1);
}
