#include <bits/stdc++.h>
using namespace std;
long long i,j, a[1000000],tong,n,sum;
long long tinh (long long h){
    s=0;
for (i =1 ;i<=n;i++){
    if (a[i]>=h)
        s+= a[i]-h;
}
}
int main (){
ifstream cin ("PHILAO.INP");
ofstream cout ("PHILAO.OUT");
cin >>n>>tong;
sum =0;
for (i=1;i<=n;i++){
    cin >> a[i];
}
    sort (a+1,a+1+n);
/*for (int i = 1;i<=a[n];i++){
    for (int j =n;j>=1;j--){
        if (a[j]>=a[n]-i)
           sum =sum+( a[j]-(a[n]-i));
        if (tong == sum)
            break;
    }
}
cout <<a[n]-i;

long long k;
while (sum < tong){
    for ( j =1;j<=a[n];j++){
        for (i =n;i>=1;i--){
            k=a[n]-j;
            if(a[i]>=k){
                sum += (a[i]-k);
            }
        }
    }
}
cout<<k;*/

return 0;
}
