#include <bits/stdc++.h>
using namespace std;
ifstream fi ("SIEUTHI.INP");
ofstream fo ("SIEUTHI.OUT");
int b[10001][10001],w[10001],v[10001],vet[10001];
int n,m,i,j,ntam;
int main ()
{
    fi>>n>>m;
    fo<<n<<"  "<<m<<endl;
    for (i=1;i<=n;i++)
        fi>>w[i]>>v[i];
    for (i=0;i<=n;i++) b[i][0]=0;
    for (j=0;j<=m;j++) b[0][j]=0;
    for (i=1;i<=n;i++)
        for (j=0;j<=m;j++)
    {
        b[i][j]=b[i-1][j];
        if ((j>=w[i])&&(b[i][j]<b[i][j-w[i]]+v[i]))
            b[i][j]=b[i][j-w[i]]+v[i];
    }
    for (i=1;i<=n;i++) vet[i]=0;
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=m;j++)
        fo<<b[i][j]<<"\t";
        fo<<endl;
    }
    fo<<b[n][m]<<endl;

    ntam=n;
    while (ntam!=0)
    {
        if (b[ntam][m]!=b[ntam-1][m])
        {
            vet[ntam]++;
            m=m-w[ntam];
        }
        else ntam--;
    }
    for (i=1;i<=n;i++)
        fo<<vet[i]<<" ";
    fi.close();
    fo.close();
    return 0;
}
