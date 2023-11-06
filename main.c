#include <stdio.h>
#include "tree.h"
int main()
{
    struct node* root= NULL;
    root= insert(root, 50);
    insert (root, 40);
    insert (root, 30);
    insert (root, 20);
    insert (root, 10);
    
    inorder (root);
    return 0;
}
