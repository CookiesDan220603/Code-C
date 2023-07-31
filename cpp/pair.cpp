#include <bits/stdc++.h>
using namespace std;
long long m,n,a[1000001],i,j,dem;;
ifstream fi ("PAIR.INP");
ofstream fo ("PAIR.OUT");
int main ()
{
    fi >>n>>m;
    for(i=1;i<=n;i++)
    {
        fi >>a[i];
    }
    if(n<=1000){
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (a[i]+a[j]==m)
            {
              dem++;
            }
        }
    }
    fo<<dem;
    }
    else
    {
        sort (a+1,a+1+n);
        i=1;
        j=n;
        dem=0;
        while (i<j)
        {
            if(a[i]+a[j]<m)
            {
                i++;
            }
            else
            {
                if (a[i]+a[j]>m)
            {
                j--;
            }
            else
            {
                dem++;
                i++;
                j--;
            }
            }
        }
        fo <<dem;
    }

    fi.close();
    fo.close();
    return 0;
}
