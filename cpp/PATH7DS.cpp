#include <bits/stdc++.h>
using namespace std;
ifstream fi ("PATH7DS.INP");
ofstream fo ("PATH7DS.OUT");
int i,j,u,v,n,s,f,adj[30000],head[30000],dauq,cuoiq,q[30000],trace[10000],tam,dem,d[10000],b[1000],c,m;
bool chuaxet[10000];
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
        for (i=head[u-1]+1;i<=head[u];i++)
        {
            if(chuaxet[adj[i]]==true)
            {
                cuoiq++;
                q[cuoiq]=adj[i];
                trace[adj[i]]=u;
                chuaxet[adj[i]]=false;
            }
        }
    }
}
int main ()
{
    fi>>n>>s>>f;
    i=0;
    head [0]=0;
    for (u=1;u<=n;u++)
    {
        do
        {
            fi >>v;
            if (v!=0)
            {
                i++;
                adj[i]=v;
            }
        }
        while(v!=0);
        head[u]=i;
    }
   /* for(m=1;m<=i;m++)
    {
        fo <<adj[m]<<" ";
    }
    fo<<endl;
    for (m=0;m<=n;m++)
    {
        fo <<head[m]<<" ";
    }*/
    for (i=1;i<=n;i++)
    {
        chuaxet[i]=true;
    }
    BFS(s);
    for (i=1;i<=n;i++)
    {
        if (chuaxet[i]==false)
        {
            c++;
            b[c]=i;
        }
    }
    fo<<"tu "<<s<<" co the di den :"<<endl;
for (i=1;i<=c;i++)
{
    fo<<b[i]<<" ";
}
fo <<endl;

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

