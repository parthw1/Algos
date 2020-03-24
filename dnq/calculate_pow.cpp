#include <bits/stdc++.h>

using namespace std;


int calcpow(int x, int n)
{
    if(n==0)
    return 1;

    else if(n==1)
    return x;

    else if(n%2==0)
    {
        int t=calcpow(x,n/2);
        return t*t;
    }
    else
    {
        int t=calcpow(x,n/2);
        return t*t*x;
    }
}
    
int main()
{
    int x,n;
    cin>>x>>n;
    cout<<calcpow(x,n)<<"\n";
}