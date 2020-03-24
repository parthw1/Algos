#include <bits/stdc++.h>

using namespace std;

struct node
{
    int key;
    struct node *left, *right;
}

struct node* newnode(int key)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        return inorder(root->left);
        cout<<root->key<<" ";
        return inorder(root->right);
    }
}

struct node* insert(struct node* node, int key) 
{ 
    if (node == NULL) return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else
        node->right = insert(node->right, key); 
  
    return node; 
} 

struct node* findmin(struct node* nodee)
{
    struct node *root=nodee;
    while(root && root->left!=NULL)
        root=root->left;
    return root;
}

struct node* delete(struct node* root, int data)
{
    if(roo==NULL)
    return root;

    if(key<root->key)
    root->left=delete(root->left,key);
    else if(key>root->key)
    root->right=delete(root->right, key);
    else
    {
        if(root->left==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        struct node *temp=findmin(root->right);

        root->key = temp->key;
        root->right =delete(root->right, temp->key);
    }
    return root;
}

int main()
{
    struct node *root = NULL; 
    root = insert(root, 50); 
    root = insert(root, 30); 
    root = insert(root, 20); 
    root = insert(root, 40); 
    root = insert(root, 70); 
    root = insert(root, 60); 
    root = insert(root, 80); 
  
    printf("Inorder traversal of the given tree \n"); 
    inorder(root); 
  
    printf("\nDelete 20\n"); 
    root = deleteNode(root, 20); 
    printf("Inorder traversal of the modified tree \n"); 
    inorder(root); 
  
    printf("\nDelete 30\n"); 
    root = deleteNode(root, 30); 
    printf("Inorder traversal of the modified tree \n"); 
    inorder(root); 
  
    printf("\nDelete 50\n"); 
    root = deleteNode(root, 50); 
    printf("Inorder traversal of the modified tree \n"); 
    inorder(root); 
  
    return 0; 
}