
#include <bits/stdc++.h>
#include <string>
using namespace std;
char s[1000000];
int a[1000000],k,n,dem,i;

ifstream fi ("VUOTSONG.INP");
ofstream fo ("VUOTSONG.OUT");
int main ()
{
    fi >>s;
    k=strlen(s);
    for (i=0;i<=k;i++)
    {
       if(s[i]=='B')
        dem++;
    }
    fo<<dem;
}
