#include <bits/stdc++.h>
using namespace std;
int mape[6][6];
bool temp[6][6];
int m,n,T;
int sx, sy, fx, fy,total,l,r;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
void walk(int x, int y)
{
    if (x == fx && y == fy)
    {
        total++;
        return;
    }
    else
    {
        for (int i = 0; i <= 3; i++)
        {
            if (temp[x + dx[i]][y + dy[i]] == 0 && mape[x + dx[i]][y + dy[i]] == 1)
            {
                temp[x][y]=1;
                walk(x+dx[i],y+dy[i]);
                temp[x][y]=0;

            }
        }
    }
}

int main()
{
    cin>>m>>n>>T;
    for(int ix= 1;ix<=m;ix++){
        for(int iy= 1;iy<=n;iy++){
            mape[ix][iy]=1;
        }
    }
    cin>>sx>>sy;
    cin>>fx>>sy;
    for(int i= 1;i<=T;i++){
        cin>>l>>r;
        mape[l][r]=0;
    }
    walk(sx,sy);
    cout<<total;
    return 0;
}