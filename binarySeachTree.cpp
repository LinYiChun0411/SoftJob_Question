#include <stdio.h>
#include <stdlib.h>


struct Node{
	Node *left;
	int data;
	Node *right;
	
};

void preorder(Node *root){
	if(root!=NULL){
		printf("%d\n",root->data);
		preorder(root->left);
		preorder(root->right);
	}
	
}


Node* insert(int data,Node *root);

int main(){
	Node *root=NULL;
    root = insert(25,root);	
	root = insert(10,root);	
	root = insert(20,root);
	root = insert(5,root);
    root = insert(16,root);
    root = insert(8,root);
	
	preorder(root);
	system("pause");
	return 0;
	
}

Node* insert(int data,Node *root){
	
	Node *newNode=(Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	
	
	
	if(root==NULL){//�Ū��G���j�M�� 			
		root=newNode;
		return root;
		
	}else{
		if(data < root->data){
			if(root->left == NULL){//�S������l 
				root->left = newNode;
			}else{
				insert(data,root->left); 
			}
			
		}else{
			if(root->right == NULL){//�S���k��l 
				root->right = newNode;
			}else{
				insert(data,root->right); 
			}
		}		
		return root;
		
	}
	
	
}
