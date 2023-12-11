#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int key;//datatype 
    struct tree *left, *right;
    struct tree *parent; // необязательное поле
} tree;


void preorder(tree *root)
{
    if(root == NULL)
        return;
    printf("%d ",root->key);
    if(root->left)//! NULL
        preorder(root->left);
    if(root->right)//! NULL
        preorder(root->right);
}


int main(void)
{
    tree *tr = NULL;
    
    tr = calloc(1,sizeof(tree));
    tr->key = 1;
    
    tr->right = calloc(1,sizeof(tree));
    tr->right->key = 5;

    tr->left = calloc(1,sizeof(tree));
    tr->left->key = 2;

    tr->left->left = calloc(1,sizeof(tree));
    tr->left->left->key=3;

    tr->left->right = calloc(1,sizeof(tree));
    tr->left->right->key=4;

    printf("Preorder\n");
    preorder(tr);
      
    return 0;
}
