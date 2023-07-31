#include <bits/stdc++.h>
using namespace std;
long long n,a[1000001],i,j,dem,k,T;
long long int s;
ifstream fi ("SEQS.INP");
ofstream fo ("SEQS.OUT");
int main ()
{
    fi >>n>>s;
    for (i=1;i<=n;i++)
    {
        fi >>a[i];
    }
if (n<=300)
{
    for (i=1;i<=n;i++)
        for (j=i;j<=n;j++)
    {
       T=0;
       for (k=i;k<=j;k++) T=T+a[k];
        if (T>=s) dem++;
    }
}
else{
    if (n<=5000)
{
    for (i=1;i<=n;i++)
    {
        T=0;
        for (j=i;j<=n;j++)
        {
            T = T + a[j];
        if (T>=s) dem ++;
        }
    }
}
    else
    {
        i=1;
        dem=0;
        j=1;
        T=a[i];
        while (i<=n)
        {
            if (T>=s)
            {
                dem += n-j+1;
                T=T-a[i];
                i++;
            }
            else
            {
                j++;
                if (j<=n) T=T+a[j];
                else break;
            }
        }
    }
}
fo <<dem;
fi.close();
fo.close();
return 0;
}
