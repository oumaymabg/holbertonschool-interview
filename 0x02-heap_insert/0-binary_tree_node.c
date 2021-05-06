#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

 binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
 {
    binary_tree_t * new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
		return (NULL);
	 new_node->n = value;
     new_node->parent = parent;
     new_node->left = Null;
     new_node->right = Null;
     
     return (new_node);

 }