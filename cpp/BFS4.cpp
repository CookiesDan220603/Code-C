#include <bits/stdc++.h>
using namespace std;
int i,j,n,m,s,f,u,v,b[100][100],dauq,cuoiq,q[100],trace[100],d[100],tam;
bool chuaxet[100];
ifstream fi ("BFS4.INP");
ofstream fo ("BFS4.OUT");
void BFS (int s)
{
    dauq=1;
    cuoiq=1;
    q[1]=s;
    chuaxet[s]=false;
    while (dauq<=cuoiq)
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
int main ()
{
    fi >>n>>m>>s>>f;
    for (i=1;i<=m;i++)
    {
        fi>>u>>v;
        b[u][v]=1;
        b[v][u]=1;
    }
for (i=1;i<=n;i++)
{
    chuaxet[i]=true;
}
BFS(s);
int dem =0;
if (trace[f]==0)
    {
    fo <<"khong co duong di nao tu "<<s<<" den "<<f;
    }
else
{
   tam =f;
   while (tam != s)
   {
       dem ++;
       d[dem]=tam;
        tam = trace[tam];
   }
fo <<"duong di tu " <<s<<" den "<<f <<" la : "<<endl;
for (i=1;i<=dem;i++){
    fo <<d[i]<<"<-";
}
fo <<s;
}
    return 0;
}
