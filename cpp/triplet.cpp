#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],i,j,dem,e,f,k;
ifstream fi ("TRIPLET.INP");
ofstream fo ("TRIPLET.OUT");
int main ()
{
    dem=0;
    fi >>n;
    for (i=1;i<=n;i++)
    {
        fi >>a[i];
    }
    if(n<=300)
{
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            for (k=j+1;k<=n;k++)
            {
              {
                  if (((a[i]+a[j])==a[k])||((a[i]+a[k])==a[j])||((a[j]+a[k])==a[i]))
                  {
                      dem++;
                  }
              }
            }
        }
    }
}
    else
    {
        sort (a+1,a+1+n);
        dem=0;
        for (k=1;k<=n;k++)
        {
            i=1;
            j=n;
            while (i<j)
            {
                if (i==k) i++;
                if (j==k) j--;
                if(i<j){
                 if (a[i]+a[j]<a[k])
                 {
                    i++;
                }
                else {
                        if(a[i]+a[j]>a[k])
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
    }
    fo<<dem;
    fi.close();
    fo.close();
    return 0;
}
