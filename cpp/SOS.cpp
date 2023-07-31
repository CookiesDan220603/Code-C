#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin ("SOS.INP");
    ofstream cout ("SOS.OUT");
    int n,i,dem=0;
    cin >>n;
    for (int i =(-n);i<0;i++){
        if (n%i==0){
            dem ++;}}
    for (int i =1;i<=n;i++){
        if (n%i==0){
            dem ++;}}
    cout <<dem;
    return 0;
}
