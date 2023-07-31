#include <bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001],n,c,i,d;
ifstream fi ("LINHKIEN.INP");
ofstream fo ("LINHKIEN.OUT");
int main ()
{
    fi>>n;
    for(i=1;i<=n;i++)
    {
        fi>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        fi>>b[i];
    }
    d=a[1]/b[1];
    for(i=2;i<=n;i++)
    {
        c=a[i]/b[i];
        if(c<=d)
        {
            d=c;
        }
    }
    fo<<d;
}
