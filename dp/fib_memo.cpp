#include <bits/stdc++.h>

using namespace std;

int lookup[100001]={0};

int fib(int n)
{
    if (lookup[n]!=0)
    return lookup[n];
    else
    {
        lookup[n]=fib(n-1)+fib(n-2);
        return lookup[n];
    }
}
int main()
{
    lookup[0]=1;
lookup[1]=1;
    int n;
    cin>>n;
    cout<<fib(n)<<"\n";
}