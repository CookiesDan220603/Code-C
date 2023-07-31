#include <bits/stdc++.h>
using namespace std;
int a[1000001],b[1000001],n,c,i,x,nmax,k;
ifstream fi ("PIXEL.INP");
ofstream fo ("PIXEL.OUT");
int main ()
{
    fi >>n;
    c=1;
    k=0;
    for (i=1;i<=n;i++)
    {
        fi>>x;
        a[x]++;
        if(x>=c)
            c=x;
    }
   for (i =1 ;i <=c;i++){
    if (a[i] != 0){
        k++;
    }
}
    nmax=max(nmax,x);
    fo<<k<<endl<<a[nmax];
}
