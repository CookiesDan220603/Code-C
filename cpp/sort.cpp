#include <bits/stdc++.h>
using namespace std;
int main (){
ifstream cin ("SORT.INP");
ofstream cout ("SORT.OUT");
long long n,a[100],i;
cin >>n;
for (i=1;i<=n;i++){
    cin >> a[i];
}
sort (a + 1, a + 1 + n); // sort (a+1,a+1+n,greater <long long>());
for (i=1;i<=n;i++){
        cout <<a[i]<<endl;
}
cout <<"Max in array is "<<a[n]<<endl;
cout <<"Value 2nd is "<<a[n-1]<<endl;
long long k;
cin >> k;
cout <<"Value in position "<<k<<" is "<<a[k];
return 0;
}
