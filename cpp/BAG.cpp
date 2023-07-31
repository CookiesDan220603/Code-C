#include <bits/stdc++.h>
using namespace std;
ifstream fi ("BAG.INP");
ofstream fo ("BAG.OUT");
int w[1001],v[1001],b[1001][1001],vet[1001];
int m,n,i,j,ntam;
int main ()
{
    fi>>n>>m;
    for (i=1;i<=n;i++)
        fi>>w[i]>>v[i];
    for (i=1;i<=n;i++) b[i][0]=0;
    for (j=1;j<=m;j++) b[0][j]=0;
    for (i=1;i<=n;i++)
        for (j=0;j<=m;j++)
    {
        b[i][j]=b[i-1][j];
        if (j>=w[i]&&(b[i][j]<(b[i-1][j-w[i]]+v[i])))
            b[i][j]=b[i-1][j-w[i]]+v[i];
    }
    for (i=1;i<=n;i++) vet[i]=0;
    fo<<b[n][m]<<endl;
    ntam=n;
    while (ntam!=0)
    {
        if (b[ntam][m]!=b[ntam-1][m])
        {
            vet[ntam]=ntam;
            m=m-w[ntam];
        }
        ntam--;
    }
    for (i=1;i<=n;i++)
        if (vet[i]!=0) fo<<vet[i]<<" ";
    fi.close();
    fo.close();
    return 0;
}
