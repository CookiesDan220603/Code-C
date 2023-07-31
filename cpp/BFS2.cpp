#include <bits/stdc++.h>
using namespace std;
int i,j,s,f,u,n,v,b[1000][1000],q[1000],dauq,cuoiq,dem,trace[1000],tam,d[100];
bool chuaxet[100];
ifstream fi ("BFS2.INP");
ofstream fo ("BFS2.OUT");
void BFS (int s)
{
    dauq =1;
    cuoiq=1;
    q[1]=s;
    chuaxet[s]=false;
  while(dauq<=cuoiq)
    {
        u=q[dauq];
        dauq++;
      for (v=1;v<=n;v++)
      {
          if (b[u][v]==1 && chuaxet[v]==true)
          {
              cuoiq++;
              q[cuoiq]=v;
              chuaxet[v]=false;
              trace[v]=u;
          }
      }
    }

}
int main (){
fi >>n>>s>>f;
for (i=1;i<=n;i++)
{
    for (j=1;j<=n;j++)
    {
       fi >>b[i][j];
    }
}
for (i=1;i<=n;i++)
{
    chuaxet[i]=true;
}
int dem =0;
BFS(s);
if (trace[f]==0)
    fo <<"-1";
else
{
   tam =f;
   while (tam != s)
   {
       dem ++;
       d[dem]=tam;
        tam = trace[tam];
   }
fo <<dem +1<<endl;
}
fo <<s<<" ";
for (i=dem;i>=1;i--){
    fo<<d[i]<<" ";
}
fi.close();
fo.close();
return 0;
}
