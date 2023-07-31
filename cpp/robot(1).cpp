#include <bits/stdc++.h>
using namespace std;
int main (){
ifstream cin ("ROBOT.INP");
ofstream cout ("ROBOT.OUT");
long long n,a[100],m,b[100],k[100],i,j;
cin >>n>>m;
for (i=1;i<=n;i++){
    cin >> a[i];
    k[i]=0;
}
for (j=1;j<=m;j++){
    cin >>b[j];
}
for (i =1;i<=n;i++){
    for (j = 1;j<=m;j++){
        k[i]+=abs(a[i]-b[j]);
    }
}
sort (k + 1,k+1+n);
cout <<k[n];
return 0;
}
