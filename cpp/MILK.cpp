#include <bits/stdc++.h>
using namespace std;
int a[1000001],n,k,dem,day,quahan,i;
int dau=1,cuoi=10000001,giua,vitri;
ifstream fi ("MILK.INP");
ofstream fo ("MILK.OUT");
int tinh (int k)
{
    for (i=1;i<=n;i++)
        fi>>a[i];
    sort (a+1,a+1+n);
    day=1;
    quahan=0;
    dem=0;
for (i=1;i<=n;i++)
if (a[i]<day) quahan++;
else
{
    dem++;
    if (dem==k)
    {
        day++;
        dem=0;
    }
}
return quahan;

}
int main ()
{
    fi>>n>>k;
    fo<<tinh(k)<<endl;
   while(dau<=cuoi)
   {
       giua=(dau+cuoi)/2;
       if (tinh(giua)==0)
       {
           vitri=giua;
           cuoi=giua-1;
       }
       else dau=giua+1;
   }
fo<<vitri;
}
