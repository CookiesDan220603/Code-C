#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin ("NHIPHAN.INP");
    ofstream cout ("NHIPHAN.OUT");
long long i, a[1000000],k,d,c,g,n;
bool timthay;
cin >>n>>k;
for (i=1;i<=n;i++){
    cin >>a[i];
}
sort (a + 1, a + 1 + n);
d=1;
c=n;
timthay= false;
while ((d<=c)&& (timthay==false)){
    g =(d + c)/2;
    if (a[g]==k){
        timthay = true;
    }
    else if (a[g]>k){
        c = g -1;
    }
    else d= g+1;
}
if (timthay == true )cout <<"Da tim thay k o vi tri "<<g;
else cout <<"khong tim thay ";
return 0;
}
