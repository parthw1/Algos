#include <bits/stdc++.h>

using namespace std;

struct node 
{
    int key;
    struct node *left;
    struct node *right;
};

void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
struct node* insert(struct node* root, int key)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->left=root->right=NULL;
        root->key=key;
        return root;
    }
    if(key<root->key)
        root->left=insert(root->left, key);
    else
        root->right=insert(root->right, key);
    
    return root;
}

int main()
{
        struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    // print inoder traversal of the BST 
    inorder(root); 
   
    return 0; 
}
