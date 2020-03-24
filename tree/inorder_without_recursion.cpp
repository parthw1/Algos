#include <bits/stdc++.h>

using namespace std;

struct treenode
{
    int data;
    struct treenode* left;
    struct treenode* right;
    treenode (int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
};

void inorder(struct treenode* root)
{
    stack<treenode*>s;
    struct treenode* curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";

        curr=curr->right;
    }
}


int main()
{
    struct treenode *root = new treenode(1); 
    root->left        = new treenode(2); 
    root->right       = new treenode(3); 
    root->left->left  = new treenode(4); 
    root->left->right = new treenode(5); 
  
    inorder(root); 
    return 0; 
}