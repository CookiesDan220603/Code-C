//tìm TBC làm tròn tới phần thập phân thứ 2
#include <bits/stdc++.h>
using namespace std;
int main (){
    ifstream cin("TBC.INP");
    ofstream cout ("TBC.OUT");
long long n,a[100];
cin >>n;
long double TBC,S =0;
for (int i=0;i < n;i++){
    cin >>a[i];
    S += a[i];
}
TBC = S / n;
cout <<setprecision (2)<<fixed<<TBC;
    return 0;
}
