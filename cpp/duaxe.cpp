#include <bits/stdc++.h>
using namespace std;
int main(){
ifstream cin ("DUAXE.INP");
ofstream cout ("DUAXE.OUT");
int n, a[100];
cin >> n;
for (int i = 0; i<n+1; i++){
    cin >>a[i];
}
int dem = 0,i=0;
while (i <=n){
    if (a[i]<a[i+1]) dem ++;
    while (a[i]<a[i+1])i++;
    i++;}
cout <<dem;
return 0;
}
