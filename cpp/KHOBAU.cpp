#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;
ifstream fi ("KHOBAU.INP");
ofstream fo ("KHOBAU.OUT");
long long u,v,i,j,n,b[1001],trace[1001],dem;
queue <int> q;
vector <int> ke[1001];
bool chuaxet[1001];
void BFS (int s){
q.push(s);
chuaxet[s]=false;
while (!q.empty())
{
    u=q.front();
    q.pop();
    for (j=0;j<ke[u].size();j++)
    {
        v=ke[u][j];
        if (chuaxet[v]==true)
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
fi>>n;
for (i=1;i<=n;i++)
{
    fi>>u>>v;
    b[u]++;
    b[v]++;
    ke[u].push_back(v);
}
for (i=1;i<=1001;i++)
    chuaxet[i]=true;
for (i=1;i<=1001;i++)
    if (b[i]!=0)
{
    if (chuaxet[i]==true)
    {
        BFS(i);
        dem++;
    }
}
fo<<dem-1;
}
