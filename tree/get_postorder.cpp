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

int search(int arr[], int x, int n) 
{ 
    for (int i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 

void printpostorder(int in[], int pre[], int n)
{
    int root=search(in, pre[0], n);
    if(root !=0)
    printpostorder(in, pre+1,root);

    if(root!=n-1)
    printpostorder(in+root+1, pre+root+1, n-root-1);

    cout<<pre[0]<<" ";
}

int main()
{
    int n,i;
    cin>>n;
    int pre[n], in[n];
    for(i=0;i<n;i++)
    cin>>pre[i];

    for(i=0;i<n;i++)
    cin>>in[i];

    printpostorder(in, pre, n);
    return 0; 
}