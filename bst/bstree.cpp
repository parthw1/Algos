#include <bits/stdc++.h>

using namespace std;

struct treenode
{
    int d;
    struct treenode *left;
    struct treenode *right;
};

struct treenode* insert(struct treenode* root, int d)
{
    if(root==NULL)
    {
        root=(struct treenode*)malloc(sizeof(struct treenode));
        root->d=d;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    
    if(d<root->d)
    root->left= insert(root->left,d);
    else if(d>root->d)
    root->right = insert(root->right, d);

    return root;
}

struct treenode* search(struct treenode * root, int key)
{
    if(root==NULL)
    return root;

    if(key==root->d)
    return root;

    if(key<root->d)
    return search(root->left, key);

    return search(root->right, key);
}

struct treenode* delete(struct treenode* root, int key)
{
    
}
struct treenode* preorder(struct treenode* root)
{
    if(root!=NULL)
    {
        cout<<root->d<<" ";
        return preorder(root->left);
        return preorder(root->right);
    }
}

void inorder(struct treenode* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->d<<" \n";
        inorder(root->right);
    }
}

int main()
{
    struct treenode *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80);

    inorder(root); 

    if(search(root, 10))
    cout<<"true\n";
    else
    cout<<"false\n";
    return 0;
}