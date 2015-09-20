#include <stdio.h>
#include <stdlib.h>

typedef struct btnode
{
    int data;
    struct btnode* left;
    struct btnode* right;
}binary_tree_node, *pbinary_tree_node;

pbinary_tree_node create_binary_tree()
{
    int data;
    pbinary_tree_node node = NULL;

    printf("Input node data:\n");
    scanf("%d", &data);
    fflush(stdin);

    if(data != '#'){
        node = (pbinary_tree_node)malloc(sizeof(binary_tree_node));
        node->data = data;
        node->left = create_binary_tree();
        node->right = create_binary_tree();
    }

    return node;
}

int main()
{
    pbinary_tree_node root;

    root = create_binary_tree();

    return 0;
}
