#include<bits/stdc++.h>
using namespace std;
int main (){
    //ifstream cin ("SNT.INP");
    //ifstream cout ("SNT.OUT");
int n;
cin>>n;
if (n<2){
    cout <<"N khong phai la so nguen to";
}
else {
    for (int i = 2;i<n-1;i++){
        if (n % i == 0){
            cout <<"N khong phai la so nguyen to";
        }
        else {
            cout<<"N la so nguyen to";
        }
    }
}


return 0;
}
