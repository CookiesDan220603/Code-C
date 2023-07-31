#include <bits/stdc++.h>
using namespace std;
int s[10001],n,i;
int main ()
{
    cin>>n;
    s[0]=0;
    s[1]=1;
    for (i=2;i<=n;i++)
        s[i]=s[i-1]+s[i-2];
    cout<<s[n];
}
