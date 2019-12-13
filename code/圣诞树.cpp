#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;
Node* init_root(int value);
Node* create_node(int value);
void insert_node(Node *p, int value);
void traverse_tree_inorder(Node *p);
void recycle_nodes(Node *p);

//#include <stdio.h>
//#include <stdlib.h>
//#include "tree.h"
 
int main(void) {
    int node_num, i = 0, temp;
    Node *root = NULL;
    scanf("%d", &node_num);
    while (i < node_num) {
        scanf("%d", &temp);
        if (i == 0) root = init_root(temp);
        else insert_node(root, temp);
        i++;
    }
    traverse_tree_inorder(root);
    printf("\n");
    recycle_nodes(root);
    return 0;
}

//#include "tree.h"

Node* init_root(int value){
    	Node *root = (Node *)malloc(sizeof(Node));
        root->value = value;
        root->left = NULL;
        root->right = NULL;
return root;
}

Node* create_node(int value){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->value = value;
    temp->left = NULL;
    temp->right = NULL;
return temp;
}

void insert_node(Node *p, int value){
	Node *temp = create_node(value);
  while(p != NULL)
  {
  	if(p->value > value)
  	{
  	    if(p->left == NULL)
	    {
	        p->left = temp;
			break;
		}
		else
		{
			p = p->left;
		}	
	}
	else
	{
		if(p->right == NULL)
		{
			p->right = temp;
			break;
		}
		else
		{
			p = p->right;
		}
		  
	}
    
  }
  
}

void traverse_tree_inorder(Node *p){
    if(p != NULL)
    {
        traverse_tree_inorder(p->left);
     
        printf("%d ",p->value);
    
        traverse_tree_inorder(p->right);
    }

}

void recycle_nodes(Node *p){
    if(p != NULL)
    {
        recycle_nodes(p->left);
    
        recycle_nodes(p->right);
    free(p);
    }
}
