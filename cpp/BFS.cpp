#include <bits/stdc++.h>
using namespace std;
int i,j,n,u,v,dauq,cuoiq,q[100],b[100][100],dem;
bool chuaxet[100];
ifstream fi ("BFS1.INP");
ofstream fo ("BFS1.OUT");
void BFS (int s){
    int u,v;
    dauq=1;
    cuoiq=1;
    q[1]=s;
    chuaxet[s]=false;
   while (dauq<=cuoiq){
        u=q[dauq];
    dauq++;
       for(v =1;v<=n;v++)
        {
        if ((b[u][v]==1)&&(chuaxet[v]==true))
            {
            cuoiq++;
            q[cuoiq]=v;
            chuaxet[v]=false;
            }
       }
    }

}
int main (){
fi >>n;
for (i =1;i<=n;i++)
    {
    for (j=1;j<=n;j++)
        {
        fi>>b[i][j];
        }
    }
     for (i=1;i<=n;i++)
     {
         chuaxet[i]=true;
     }
    for (i=1;i<=n;i++)
    {
       if (chuaxet[i]==true)
       {
           BFS(i);
           dem++;
       }
    }
    fo <<dem;
    fi.close();
    fo.close();
    return 0;
}

