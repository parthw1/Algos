#include <bits/stdc++.h>

using namespace std;

int lookup[100001]={0};

int fib(int n)
{
    lookup[0]=1;
    lookup[1]=1;
    for(int i=2;i<=n;i++)
    lookup[i]=lookup[i-1]+lookup[i-2];
    return lookup[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<"\n";
}