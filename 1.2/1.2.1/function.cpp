#include <stdio.h>
#include <stdlib.h>
#include "function.h"

pbinary_tree_node tail_node = NULL;

pbinary_tree_node create_binary_tree()
{
    int data;
    pbinary_tree_node node = NULL;

    printf("Input node data:\n");
    scanf("%d", &data);
    fflush(stdin);

    if(data != -1){
        node = (pbinary_tree_node)malloc(sizeof(binary_tree_node));
        node->data = data;
        node->left_child = create_binary_tree();
        node->right_child = create_binary_tree();
    }

    return node;
}

void tree_to_linklist(pbinary_tree_node current_node)
{
	tail_node->right_child = current_node;
	current_node->left_child = tail_node;

	tail_node = current_node;
}

void inorder_traversal(pbinary_tree_node node)
{
	if(node != NULL)
	{
		inorder_traversal(node->left_child);

		if(tail_node == NULL)
			tail_node = node;
		tree_to_linklist(node);

		inorder_traversal(node->right_child);
	}
}
