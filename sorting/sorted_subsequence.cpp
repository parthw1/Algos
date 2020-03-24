#include <bits/stdc++.h>

using namespace std;

void findsorted(int ar[], int n)
{
    int smaller[n];
    int greater[n];
    int min=0,max=n-1,i;

    smaller[0]=-1;greater[n-1]=-1;
    for(i=1;i<n;i++)
    {
        if(ar[i]<=ar[min])
        {
            min=i;
            smaller[i]=-1;
        }
        else
        {
            smaller[i]=min;
        }    
    }

    for(i=n-2;i>=0;i--)
    {
        if(ar[i]>=ar[max])
        {
            max=i;
            greater[i]=-1;
        }
        else
        {
            greater[i]=max;
        }    
    }

    for(i=0;i<n;i++)
    {
        if(smaller[i]>=0 && greater[i]>=0)
        {
            cout<<ar[smaller[i]]<<" "<< ar[i]<<" "<<ar[greater[i]]<<"\n";
            return;
        }
    }
    cout<<"No triplet found\n";

    return;
}

int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    cin>>ar[i];
    findsorted(ar,n);
    return 0;
}