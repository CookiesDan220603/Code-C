#include <bits/stdc++.h>
#include <queue>
using namespace std;
ifstream fi ("ROBOT.INP");
ofstream fo ("ROBOT.OUT");
int ax[4]={-1,0,1,0};
int ay[4]={0,1,0,-1};
int a[1001][1001],n,m,i,j,x,y,xo,yo,k,v,z,t,vo;
queue <int> qx,qy;
char c;
int main(){
fi>>m>>n>>x>>y>>z>>t;
for (i=1;i<=m;i++)
{
  for (j=1;j<=n;j++)
  {
      fi>>a[i][j];
  }
}
  qx.push(x);
  qy.push(y);
  a[x][y]=2;
  vo=a[x][y];
  while (!qx.empty()&&(a[z][t]<2))
  {
      xo=qx.front();
                qx.pop();
                yo=qy.front();
                qy.pop();
                for (k=0;k<=3;k++)
                {
                    x=xo+ax[k];
                    y=yo+ay[k];
                    if ((x>0)&&(x<=m)&&(y>0)&&(y<=n))
                        if(a[x][y]==v)
                    {
                        qx.push(x);
                        qy.push(y);
                        a[x][y]=a[xo][yo]+1;
                }
            }
  }
  if (a[z][t]<2) fo<<"khong co duong di";
  else fo<<a[z][t]-vo;
  fi.close();
  fo.close();
  return 0;
}


