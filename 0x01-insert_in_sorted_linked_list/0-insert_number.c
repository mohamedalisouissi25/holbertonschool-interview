#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: input
 * @number: input
 * Return: output
 */

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *_pointer = *head;
	listint_t *newnode;

	if ( *head == NULL )
		return (add_nodeint_end(head, number));

	newnode = malloc(sizeof(listint_t));
	if ( newnode == NULL )
		return (NULL);
	newnode->n = number;

	if (_pointer->n > number)
	{
		newnode->next = _pointer;
		*head = newnode;
		return (newnode);
	}

	while (_pointer && _pointer->next)
	{

		if (_pointer->next->n > number)
			break;
		_pointer = _pointer->next;
	}

	newnode->next = _pointer->next;
	_pointer->next = newnode;
	return (newnode);
}
