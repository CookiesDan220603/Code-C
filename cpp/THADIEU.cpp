#include <bits/stdc++.h>
using namespace std;
int a[100000],n,b[1000000],c,i,k,m,j,x;
ifstream fi ("THADIEU.INP");
ofstream fo ("THADIEU.OUT");
int main ()
{
   fi>>n;
   fi>>a[1];
   b[1]=1;
   for (i=2;i<=n;i++)
   {
       fi>>a[i];
       x=a[i];
       k=i;
       sort(a+1,1+a+k);
       for (j=k;j>=1;j--)
        if (x==a[j]){
        b[i]=k-j+1;
        break;
        }

   }
   for (i=1;i<=n;i++)
    fo<<b[i]<<endl;
}
