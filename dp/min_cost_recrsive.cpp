#include <bits/stdc++.h>

#define r 3
#define c 3
using namespace std;


int min(int x, int y, int z)
{
    if(x<y)
    return (x<z)? x:z;
    else
    return (y<z)?y:z;
}
int min_cost(int cost[r][c], int m, int n)
{
    if(m<0 || n<0)
    return INT_MAX;
    else if(m==0 && n==0)
    return cost[m][n];
    else
    return cost[m][n]+min(min_cost(cost, m-1, n-1),
                          min_cost(cost, m-1, n),
                          min_cost(cost, m, n-1));
}


int main()
{
    int cost[r][c];
    int i,j,m,n;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        cin>>cost[i][j];
    }
    cin>>m>>n;
    cout<<min_cost(cost, m, n);
}