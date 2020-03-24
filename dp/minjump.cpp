#include<bits/stdc++.h>

using namespace std;

int minjump(int ar[], int n)
{
    int jump[n];
    int i,j;

    if(n==0 || ar[0]==0)
    return INT_MAX;
    jump[0]=0;
    for(i=1;i<n;i++)
    {
        jump[i]=INT_MAX;
        for(j=0;j<i;j++)
        {
            if(j+ar[j]>=i && jump[j]!=INT_MAX)
            jump[i]=min(jump[i], jump[j]+1);
        }
    }
    return jump[n-1];
}
int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    cin>>ar[i];
    cout<<minjump(ar,n)<<"\n";
}