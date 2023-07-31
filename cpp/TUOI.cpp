#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main (){
    ifstream cin ("TUOI.INP");
    ofstream cout ("TUOI.OUT");
long long i,a[10000];
for ( i =1;i<=1000000;i++){
    cin >>a[i];
    d[a[i]]++;
    if (a[i]==0) break;
}
for ( i =1;i<=100;i++){
        cout<<i<<" "<<d[i]<<endl;
    }
return 0;
}
