#include <bits/stdc++.h>
using namespace std;
int a[100000],n,b[11],c,i,y,m;
ifstream fi ("SOTRANG.INP");
ofstream fo ("SOTRANG.OUT");
int main ()
{
    fi>>n;
    for (i=1;i<=n;i++){
        m=i;
        while (m>0)
    {
        y=m%10;
        b[y]++;
        m=m/10;
    }
    }
   for (i=0;i<=9;i++)
   {
       fo<<i<<" "<<b[i]<<endl;
   }
}
