#include "lists.h"

/**
 * check_cycle - a function in C that checks if a singly linked list has a cycle in it.
 * @list: input
 * Return: output

 */

int check_cycle(listint_t *list)

{
listint_t *uno, *dos;
	if (!list)
	return (0);
	uno = list;
	dos = list;

	while (uno && dos && dos->next)
	{
	uno = uno->next;
	dos = dos->next->next;

	if (uno == dos)
	return (1);
	}
	return (0);
}
