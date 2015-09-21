#include "function.h"

int main()
{
    pbinary_tree_node root;

    root = create_binary_tree();
	inorder_traversal(root);

    return 0;
}
