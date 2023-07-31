#include<bits/stdc++.h>
using namespace std;
long long n,i,a[1000000],vt, d, c,g, k;
bool tim;
int main(){
    ifstream cin("TKNP2.INP");
    ofstream cout("TKNP2.OUT");
    cin>>n; cin >> k;
    for ( i=1; i<=n; i++)
        cin>> a[i];

sort (a+1,a+1+n);
d=1; c=n;
tim = false;
while ((d<=c)&&(tim==false)){
    g=(d+c)/2;
    if(a[g]<=k){
        vt=g;
        d=g+1;
    }
    else c=g-1;

}
 if (vt==0) cout<< "khong thay";
    else cout << a[vt];
return 0;}
