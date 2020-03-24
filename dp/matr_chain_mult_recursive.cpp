#include <bits/stdc++.h>

using namespace std;


int matrix_chain_order(int p[], int i, int j)
{
    if(i==j)
    return 0;

    int k,min=INT_MAX,count;

    for(k=i;k<j;k++)
    {
        count=matrix_chain_order(p,i,k)+
        matrix_chain_order(p,k+1,j)+
        p[i-1]*p[k]*p[j];

        if(count<min)
        min=count;
    }
    return min;
}
int main()
{
    int n,i;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    cin>>p[i];
    cout<<matrix_chain_order(p,1,n-1);
}