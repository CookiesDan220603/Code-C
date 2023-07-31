#include<bits/stdc++.h>
using namespace std;
long long KTSNT(int n){
if (n<2) return false;
for (int i = 2;i<=(sqrt(n));i++)
    if (n % i == 0) return false;
        return true;
}
int main (){
    ifstream cin("SNT.INP");
    ofstream cout("SNT.OUT");
    int n;
    cin >>n;
    for (int i = 2 ; i <=n;i++)
        if (n%i==0)
        if (KTSNT(i)==true){cout<<i<<endl;}



return 0;
}
