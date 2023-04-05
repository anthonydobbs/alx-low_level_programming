#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - functions that adds a new node at the end of a linked list
 * @head: the pointer that points to the first node
 * @n: integer variable
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *endNode;
	listint_t *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		endNode = *head;
		while (endNode->next != NULL)
		{
			endNode = endNode->next;
		}
		endNode->next = new;
	}
	return (new);
}
