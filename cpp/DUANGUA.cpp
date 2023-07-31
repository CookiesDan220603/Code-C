#include <bits/stdc++.h>;
using namespace std;
int s,i,j,dem,n,a[1000],b[10000];
ifstream fi ("DUANGUA.INP");
ofstream fo ("DUANGUA.OUT");
int main()
{
   fi>>n;
   for (i=1;i<=n;i++)
   {
       fi>>a[i];
   }
   sort(a+1,a+1+n);
   for (i=1;i<=n;i++)
   {
       fi>>b[i];
   }
   sort (b+1,b+1+n);
   for (i=n;i>=1;i--)
   {
       s=a[i];
       for (j=n;j>=1;j--)
       {
           if (b[j]==0) continue;
           else
           {
               if (s>b[j])
               {
                   dem++;
                   b[j]=0;
               }
           }
       }
   }
fo<<dem;
}
