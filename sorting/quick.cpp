#include <bits/stdc++.h>

using namespace std;

void swap(int *a, int*b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

int partition(int ar[], int l, int r)
{
    int pivot =ar[r];
    int i=l-1,j;

    for(j=l,j<=h-1;j++)
    {
        if(ar[j]<pivot)
        {
            i++;
            swap(&ar[j],&ar[i]);
        }
    }
    swap(&ar[i+1], &ar[h]);
    return i+1;
}

void quicksort(int ar[], int l, int h)
{
    if(l<h)
    {
        int pi=partition(ar,l,h);
        quicksort(ar, l,pi-1);
        quicksort(ar,pi+1, h);
    }
}

int main()
{
    int n,i;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
    cin>>ar[i];
    quicksort(ar,0,n-1);
}