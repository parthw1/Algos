#include <bits/stdc++.h>

using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
    node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};


void preorder(struct node *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    struct node *root = new node(1); 
    root->left             = new node(2); 
    root->right         = new node(3); 
    root->left->left     = new node(4); 
    root->left->right = new node(5);  

    cout << "\nPreorder traversal of binary tree is \n"; 
    preorder(root); 
  
    cout << "\nInorder traversal of binary tree is \n"; 
    inorder(root);  
  
    cout << "\nPostorder traversal of binary tree is \n"; 
    postorder(root); 


    return 0;
}