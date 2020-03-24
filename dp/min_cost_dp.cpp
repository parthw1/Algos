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
    int dp[m+1][n+1],i,j;
    dp[0][0]=cost[0][0];
    for(i=1;i<=m;i++)
        dp[i][0]=dp[i-1][0]+cost[i][0];

    for(j=1;j<=n;j++)
        dp[0][j]=dp[0][j-1]+cost[0][j];
    
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            dp[i][j]=cost[i][j]+min(dp[ i-1][j-1],
                                    dp[ i-1][j],
                                    dp[i][ j-1]);
    return dp[m][n];
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