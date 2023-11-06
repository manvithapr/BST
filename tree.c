#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
struct node* newNode(int item)
{
    struct node* temp;
    temp= malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct node* root)
{
    if (root != NULL){
        inorder (root-> left);
        printf("%d ",root->data);
        inorder (root-> right);
    }
}
struct node* insert(struct node* node, int data)
{
    if (node==NULL)
        return newNode(data);
        
        if (data < node->data)
        node->left = insert(node->left, data);
        else if (data > node->data)
        node->right = insert(node->right, data);
        return node;
}

struct node* delete(struct node * root, int data) 
{  
  if (root == NULL)  
    return NULL;  
  if (data> root->data)  
    root->right = delete(root->right, data);  
  else if (data < root->data)  
    root->left= delete(root->left, data);  
  else {  
    if (root->left == NULL && root->right == NULL){  
      free(root);  
      return NULL;  
    }  
    else if (root->left == NULL || root->right == NULL){  
      struct node *temp;  
      if (root->left == NULL)  
        temp = root->right;  
      else  
        temp = root->left;  
      free(root);  
      return temp;  
    }
  }
}
