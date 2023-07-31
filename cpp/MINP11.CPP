#include <bits/stdc++.h>
using namespace std;
ifstream fi ("MINP11.INP");
ofstream fo ("MINP11.OUT");
int n,m,s,f,u,v,head[100001],adj[100001],dauq,q[100001],cuoiq,trace[100001],tam,c,i,j,dem,d[100001];
bool chuaxet[100001];
void BFS (int s)
{
    dauq=1;
    cuoiq=1;
    chuaxet[s]=false;
    q[1]=s;
    while (dauq<=cuoiq)
    {
        u=q[dauq];
        dauq++;
        for (i=head[u]+1;i<=head[u+1];i++)
        {
            if(chuaxet[adj[i]]==true)
            {
                cuoiq++;
                q[cuoiq]=adj[i];
                chuaxet[adj[i]]=false;
                trace[adj[i]]=u;
            }
        }
    }
}
int main ()
{
    fi>>n>>m>>s>>f;
    for (i=1;i<=m;i++)
{
    fi>>u>>v;
    head[v]=head[v]++;
    head[u]=head[u]++;
    fi.close();
}
for (i=2;i<=n;i++)
    head[i]=head[i-1]+head[i];
fi>>n>>m>>s>>f;
for (i=1;i<=m;i++)
{
    fi>>u>>v;
    adj[head[u]]=v; head[u]=head[u]-1;
    adj[head[v]]=u;head[v]=head[v]-1;
}
head[n+1]=2*m;
for (i=1;i<=n;i++)
    chuaxet[i]==true;
    for(m=1;m<=i;m++)
    {
        fo <<adj[m]<<" ";
    }
    fo<<endl;
    for (m=0;m<=n;m++)
    {
        fo <<head[m]<<" ";
    }
BFS(s);
if (trace[f]==0)
  {
      fo <<"Khong co duong di tu "<<s<<" den "<<f;
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
    fo <<"duong di tu "<<s<<" den "<<f <<" : "<<endl;
    for (i=1;i<=dem;i++)
    {
        fo <<d[i]<<" ";
    }
    fo<<s;
}
}
