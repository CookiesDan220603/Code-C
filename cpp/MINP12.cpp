#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
ifstream fi ("MINP11.INP");
ofstream fo ("MINP11.OUT");
vector <int> ke[100001];
queue <int> q;
int i,j,u,v,s,f,dem,trace[100001],tam,n,m,d[100001];
bool chuaxet[100001];
void BFS (int so)
{
    q.push(so);
    chuaxet[so]=false;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(j=0;j<ke[u].size();j++)
        {
            v=ke[u][j];
            if(chuaxet[v]==true)
            {
                q.push(v);
                chuaxet[v]=false;
                trace[v]=u;
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
        ke[u].push_back(v);
    }
    for (i=1;i<=n;i++)
        chuaxet[i]=true;
   BFS (s);
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
    fo<<s<<" ";
    for (i=dem;i>=1;i--)
    {
        fo <<d[i]<<" ";
    }
  }

}
