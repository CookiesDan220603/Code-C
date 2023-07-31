#include <bits/stdc++.h>
using namespace std;
int n,a[5001],i,j,dem,e,m,k;
ifstream fi ("ZEROSUM.INP");
ofstream fo ("ZEROSUM.OUT");
int main ()
{
    fi>>n;
    for (i=1;i<=n;i++)
    {
        fi>>a[i];
    }
    if (n<=300){
   for (i=1;i<=n;i++)
   {
       for (j=i+1;j<=n;j++)
       {
           for (k=j+1;k<=n;k++)
           {
               if ((a[i]+a[j]+a[k])==0)
               {
                   dem++;
               }
           }
       }
   }
    }
    else
    {
      sort (a+1,a+1+n);
      dem =0;

        for (k=1;k<=n-2;k++)
        {
            i=k+1;
            j=n;
            while (i<j){
                if (a[i]+a[j]+a[k]<0)
                 {
                    i++;
                }
                else {
                        if(a[i]+a[j]+a[k]>0)
                {
                    j--;
                }
                else
                {
                    dem++;
                    j--;
                    i++;
                }
            }
        }
    }
}
fo<<dem;
    fi.close();
    fo.close();
    return 0;
}
