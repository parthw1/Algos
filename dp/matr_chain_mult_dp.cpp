#include <bits/stdc++.h>

using namespace std;

int matrix_chain_dp(int p[], int n)
{
    int mat[n][n];

    int i,j,l;
    for(i=0;i<n;i++)
    mat[i][i]=0;

    for(i=1;i<n-1;i++)
    mat[i][i+1]=p[i-1]*p[i]*p[i+1];


    //l is chain length
    for(l=2;l<n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            
        }
    }
}
int main()
{
    int n,i;
    cin>>n;
    int p[n];
    for(i=0;i<n;i++)
    cin>>p[i];

    cout<<matrix_chain_dp(p,n);
}