#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * is_palindrome - function in C that checks if a singly linked list is a palindrome.
 * @head: input
 * Return: output
 */

int is_palindrome(listint_t **head)
{
	int i, x = 0;
	int y;
	int tab[2069];

	if (*head == NULL)
	return (1);

	while (*head)
	{
		tab[x] = (*head)->n;
		*head = (*head)->next;
		x = x + 1;
	}
	--x;
	y = x / 2;

	while (i <= y)
	{
		if (tab[i] != tab[x])
		return (0);
		++i;
		--x;
	}

	return (1);
}
