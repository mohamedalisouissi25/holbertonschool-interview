#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* newnode - function that creates a new node
* @l: input
* @i: input
* @j: input
* @parent: input
* Return: output
*/

avl_t *newnode(int *l, size_t i, size_t j, avl_t *parent)

{
avl_t *node;
size_t x;

node = malloc(sizeof(avl_t));

	if (node == NULL)
	return (NULL);

x = (i + j) / 2;

node->n = l[x];
node->parent = parent;

	if (x != i)
		node->left = newnode(l, i, x - 1, node);
	else
		node->left = NULL;
	if (x != j)
		node->right = newnode(l, x + 1, j, node);
	else
	node->right = NULL;

return (node);
}

/**
 * sorted_array_to_avl - function that builds an AVL tree from an array
 * @array: input
 * @size: input
 * Return: output
 */

avl_t *sorted_array_to_avl(int *array, size_t size)

{
avl_t *root;

	if (array == NULL)
	return (NULL);

	if (size)
	{
		root = newnode(array, 0, size - 1, NULL);
		return (root);
	}
return (NULL);
}
