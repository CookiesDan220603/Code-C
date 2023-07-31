#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
using namespace std;
ifstream fi ("TAUBIEN.INP");
ofstream fo ("TAUBIEN.OUT");
int n,m,a[10001],dem,k,mtam,i;
bool chuaxet[10001];
int main ()
{
    fi>>n>>m;
    for (i=1;i<=n;i++)
        fi>>a[i];
    sort(a+1,a+1+n,greater<int>());
    for (i=1;i<=n;i++)
        chuaxet[i]=true;
    mtam=m;
while (dem<n)
{
    k++;
    for (i=1;i<=n;i++)
        if((a[i]<=mtam)&&(chuaxet[i]==true))
        {
            mtam=mtam-a[i];
            chuaxet[i]==false;
            dem++;
        }
   mtam=m;
}
fo<<k;
}
