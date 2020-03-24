#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) { return (a > b)? a : b; }  

int knapsack(int w, int wt[], int val[], int n)
{
    if(w==0 || n==0)
    return 0;

    if(wt[n-1]>w)
    return knapsack(w,wt,val,n-1);
    else
    return max(val[n-1]+knapsack(w-wt[n-1], wt, val, n-1), knapsack(w, wt, val, n-1));
}


int main()
{
    int n,i,w;
    cin>>n;
    cin>>w;
    int wt[n];
    int val[n];
    for(i=0;i<n;i++)
    cin>>wt[i];
    for(i=0;i<n;i++)
    cin>>val[i];
    cout<<knapsack(w,wt,val,n)<<"\n";
}