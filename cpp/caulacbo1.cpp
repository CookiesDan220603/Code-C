#include <bits/stdc++.h>
using namespace std;
ifstream fi ("CAULACBO.INP");
ofstream fo ("CAULACBO.OUT");
int i,a[10001],n;
int main ()
{
fi >>n;
for (i=1;i<=n;i++){
    fi>> a[i];
}
sort (a+1,a+1+n);
for (i=1;i<=a[n];i++){
    if (a[i]!=i){
        fo <<i;
        break;
    }
}
return 0;
}
