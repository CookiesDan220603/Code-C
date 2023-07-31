#include<bits/stdc++.h>
using namespace std;
long long KTSNT(int n){
if (n<2)
    return false;
for (int i = 2;i<=n/2;i++)
    if (n % i == 0)
        return false;
        return true;
}
int main (){
int n;
cin >>n;
if (KTSNT(n)==false){cout <<"N khong phai la so nguyen to";}
if (KTSNT(n)==true){cout <<"N la so nguyen to";}
}
