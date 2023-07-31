#include <bits/stdc++.h>
using namespace std;

int main (){
    ifstream cin ("HAILOPHOC.INP");
    ofstream cout ("HAILOPHOC.OUT");
long long n,m,a[100000],b[100000],x;
cin >>n;
cin>>m;
for (long long i =1;i<=n;i++){
    cin >>x;
    a[x]++;
}
for (long long i =1;i<=m;i++){
    cin >>x;
    b[x]++;
}
long long dem=0;
for (long long i =0;i<=100000;i++){
    dem += a[i]*b[i];
}
cout <<dem;
return 0;
}
