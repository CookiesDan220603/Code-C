#include <bits/stdc++.h>
using namespace std;
long long m,n,i,j,dauq,cuoiq,q[30000],b[3000][3000],u,v,d[30000];
bool chuaxet[30000];
ifstream fi ("DONGCO.INP");
ofstream fo ("DONGCO.OUT");
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
            }
        }
    }
}
int main ()
{
    fi >>n>>m;
    for (i=1;i<=n;i++)
    {
        fi >>u>>v;
        b[u][v]=1;
        b[v][u]=1;
    }
    for (i=1;i<=n;i++)
    {
        chuaxet[i]=true;
    }
   BFS(1);
   int dem=0;
for (i=1;i<=n;i++)
{
    if (chuaxet[i]==true)
    {
       dem++;
       d[dem]=i;
    }
}
fo <<dem<<endl;
for (i=1;i<=dem;i++)
{
    fo <<d[i]<<" ";
}
fi.close();
fo.close();

    return 0;
}
