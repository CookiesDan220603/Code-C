#include <bits/stdc++.h>
using namespace std;
long long UCLN (long long m,long long n){
    while (n>0){
        m = m%n;
        swap (m,n);
}
        return m;
}
int main(){
    ifstream cin ("UCN.INP");
    ofstream cout ("UCN.OUT");
int n,k,a[106];
cin >>n>>k;
int j=0;
for (int i = 0;i<n;i++){
    cin >>a[i];
    if(UCLN(a[i],k)==1){
            j++;
    }
}
cout <<j<<endl;
for (int i = 0;i<n;i++){
    cin >>a[i];
    if(UCLN(a[i],k)==1){
        cout <<a[i]<<" ";
    }
}


return 0;
}
