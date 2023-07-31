#include <bits/stdc++.h>
#include <iostream>
using namespace std;
    ifstream fi("GRAPH1.INP");
    ofstream fo("GRAPH1.OUT");
int main(){
int i,j,n,a[100][100],b[100];
fi >>n;
for (i=1;i<=n;i++){
    for (j =1;j<=n;j++){
        fi >> a[i][j];
    }
}
for (i=1;i<=n;i++){
    for (j =1;j<=n;j++){
        b[i]+=a[i][j];
    }
}
for (i=1;i<=n;i++){
    fo <<b[i]<<" ";
}
return 0;
}
