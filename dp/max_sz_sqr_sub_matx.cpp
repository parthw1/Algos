#include <bits/stdc++.h>

#define r 6
#define c 5

using namespace std;

int min(int x, int y, int z)
{
    if(x<z)
    return (x<y)?x:y;
    else
    return (z<y)?z:y;
}

void max_sub_sqr(int m[r][c])
{
    int s[r][c];
    int i,j;
    for(i=0;i<r;i++)
    s[i][0]=m[i][0];

    for(i=0;i<c;i++)
    s[0][i]=m[0][i];

    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(m[i][j]==1)
                s[i][j]=1+min(s[i][j-1], s[i-1][j], s[i-1][j-1]);
            else
                s[i][j]=0;
        }
    }

    int max_s=s[0][0], max_i=0,max_j=0;

    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(max_s <s[i][j])
            {
                max_s=s[i][j];
                max_i=i;
                max_j=j;
            }
        }
    }

    for(i=max_i;i>max_i-max_s;i--)
    {
        for(j=max_j;j>max_j-max_s;j--)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int m[r][c]= {{0, 1, 1, 0, 1},  
                    {1, 1, 0, 1, 0},  
                    {0, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 1},  
                    {0, 0, 0, 0, 0}};  
    max_sub_sqr(m);
}