#include <bits/stdc++.h>
using namespace std;
int main (){
ifstream cin ("SORT.INP");
ofstream cout ("SORT.OUT");
long long n,a[100],i,b[100],m;
cin >>n;
for (i=1;i<=n;i++){
    cin >> a[i];
}
sort (a+1,a+1+n);
for (i=1;i<=a[n];i++){
    if (a[i]!=i){
        cout <<i;
        break;
    }
}
return 0;
}
