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
	listint_t *endNode;

	endNode = malloc(sizeof(listint_t));

	if (*head = NULL)
	{
		return (NULL);
	}

	endNode->n = n;

	listint_t *temp;

	temp = *head;

	while (temp->next = NULL)
	{
		temp = temp->next;
	}
	endNode->next = NULL;
	temp->next = endNode;

	return (new);
}
