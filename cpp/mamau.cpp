#include <bits/stdc++.h>
using namespace std;

int main (){
    ifstream cin ("PIXEL.INP");
    ofstream cout ("PIXEL.OUT");
long long n,a[1000000],i,x,nmax;
cin >>n;
for ( i =1;i<=n;i++){
    cin >>x;
    a[x]++;
}
int k=0;
for (long long i =1 ;i <=1000000;i++){
    if (a[i] != 0){
        k++;
    }
}
nmax=max(nmax,x);
cout <<k<<endl<<a[nmax];
return 0;
}
