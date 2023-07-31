#include <bits/stdc++.h>
#include <queue>
using namespace std;
ifstream fi ("GRID.INP");
ofstream fo ("GRID.OUT");
int ax[4]={-1,0,1,0};
int ay[4]={0,1,0,-1};
int a[1001][1001],n,m,i,j,x,y,xo,yo,k,v,dem0,dem1;
queue <int> qx,qy;
char c;
int main(){
fi>>m>>n;
for (i=1;i<=m;i++)
{
  for (j=1;j<=n;j++)
  {
      fi>>a[i][j];
     fi>>c;
     if (c=='1')
     a[i][j]=1 ;
     else a[i][j]=0;
  }
}
dem0=0;
dem1=0;
for(i=1;i<=m;i++)
{
    for (j=1;j<=n;j++)
    {
        if (a[i][j]<2)
        {
            qx.push(i);
            qy.push(j);
            v=a[i][j];
            a[i][j]=2;
            if (v==0)dem0++;
            else dem1++;
            while (!qx.empty())
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
                        a[x][y]=2;
                    }
                }
            }
        }
    }
}
fo<<dem0<<endl<<dem1;
fi.close();
fo.close();
return 0;
}

