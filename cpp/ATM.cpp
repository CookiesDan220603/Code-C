#include <bits/stdc++.h>;
using namespace std;
int s,i,j,dem,n,a[1000];
int t[1000],b[1000];
ifstream fi ("ATM.INP");
ofstream fo ("ATM.OUT");
int main()
{
fi>>s;
while (!fi.eof())
{
    n++;
     fi>>a[n];
}
sort (a+1,a+1+n);
for (i=n;i>=1;i--)
{
    if(s==0) break;
    else {
   b[i]=s/a[i];
   s=s%a[i];
    }
}
for (i=n;i>=1;i--)
{
    fo<<a[i]<<" "<<b[i]<<endl;
}
}

