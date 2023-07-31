#include <bits/stdc++.h>
#include <iostream>
using namespace std;
ifstream fi ("GRAPH3.INT");
ofstream fo ("GRAPH3.OUT");
int i,j,n,q,a[1000][1000],x,b[1000][1000],e,f;
int tim (int c, int d){
if (a[c][d]==1){
    fo <<"YES"<<endl;
}
else {
    fo <<"NO"<<endl;
}
}
int main (){
fi >> n>>q;
for (i =1;i<=n;i++){
    for (j=1;j<=n;j++){
        fi >>a[i][j];
    }
}
for (i =1;i<=q;i++){
    fi >>e>>f;
    tim (e,f);
}
return 0;
}
