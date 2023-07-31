#include <bits/stdc++.h>
#include <queue>
using namespace std;
ifstream fi ("MATRIX.INP");
ofstream fo ("MATRIX.OUT");
int ax[4]={-1,0,1,0};
int ay[4]={0,1,0,-1};
int a[1001][1001],n,m,i,j,dem,x,y,xo,yo,k,v;
queue <int> qx,qy;
int main ()
{
  fi>>m>>n>>x>>y;
  for (i=1;i<=m;i++)
  {
      for (j=1;j<=n;j++)
      {
          fi>>a[i][j];
      }
  }
  qx.push(x);
  qy.push(y);
  dem=1;
  v=a[x][y];
  a[x][y]=2;
  while (qx.empty()==false)
  {
      xo=qx.front();
      qx.pop();
      yo=qy.front();
      qy.pop();
      for (k=0;k<=3;k++)
      {
          x=xo +ax[k];
          y=yo +ay[k];
          if (x>0&&x<=m&y>0&&y<=n)
          {
              if (a[x][y]==v)
              {
                  qx.push(x);
                  qy.push(y);
                  dem++;
                  a[x][y]=2;
              }
          }
      }
  }
fo<<dem;
fi.close();
fo.close();
return 0;
}
