#include <bits/stdc++.h>
using namespace std;
long long i,k, a[1000000],vt,n,d,c,g;
int main (){
    ifstream cin ("TIEMCAN.INP");
    ofstream cout ("TIEMCAN.OUT");
cin >>n>>k;
    for (i =1; i<=n;i++){
       cin >>a[i];
    }
sort (a+1,a+1+n);
d =1;
c = n;
while (d < c){
    g = (d + c)/2;
    if (a[g]<=k){
       vt =g;
       d = g+1;
    }
    else c = g -1;
}
if (vt == 0 )cout <<"khong thay";
else cout <<a[vt];
return 0;
}
