#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
int c,i,x,n,m,a[100],b[100];
 ifstream cin("GRAPH2.INP");
    ofstream cout("GRAPH2.OUT");
cin >>n>>m;
c=m*2;
for (i=1;i<=c;i++){
    cin >>a[i];
    b[a[i]]+=1;
}
for (i=1;i<=n;i++){
    cout <<b[i]<<" ";
}
return 0;
}
