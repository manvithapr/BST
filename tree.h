
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
void inorder(struct node* root);
struct node* insert(struct node* node, int data);
struct node* delete(struct node * root, int data);
