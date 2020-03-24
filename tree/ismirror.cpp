#include <bits/stdc++.h>

using namespace std;

struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newnode(int data)
{
    struct node *temp=new node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}

void inorder(struct node* root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void insert(struct node* root, int key)
{
    queue<struct node*> q;
    q.push(root);
    while(!q.empty())
    {
        struct node *temp=q.front();
        q.pop();

        if(temp->left==NULL)
        {
            temp->left=newnode(key);
            break;
        }
        else
        q.push(temp->left);
        if(temp->right==NULL)
        {
            temp->right=newnode(key);
            break;
        }
        else
        q.push(temp->right);
    }
}

bool ismirror(struct node* root1, struct node* root2)
{
    if(root1==NULL && root2==NULL)
    return true;

    if(root1 && root2 && root1->key==root2->key)
    return ismirror(root1->left, root2->reft) && ismirror(root2->left, root2->right);

    return false;
}
int main()
{
    Node *root        = newnode(1); 
    root->left        = newnode(2); 
    root->right       = newnode(2); 
    root->left->left  = newnode(3); 
    root->left->right = newnode(4); 
    root->right->left  = newnode(4); 
    root->right->right = newnode(3); 
  
    cout << ismirror(root,root); 
    return 0;
}