#include <bits/stdc++.h>
using namespace std;
ifstream fi ("GAPGIAY.INP");
ofstream fo ("GAPGIAY.OUT");
long long a,b,m,dem,i,n,j;
int main ()
{
    fi>>a>>b;
    if (a%b==0)
        dem=(a*b)/(b*b)-1;
    else
    while (a!=b)
    {
        dem++;
        if (b>a-b)
        {
            m=b;
            b=a-b;
            a=m;
        }
        else
            a=a-b;

    }
    fo<<dem+1;
}
