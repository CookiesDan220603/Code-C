#include <bits/stdc++.h>
using namespace std;
double a,b,c,d,e,f;
int main (){
cin >>a>>b>>c;
d= a*a;
e=b*b;
f=c*c;
    if ((d==e+f)||(e==d+f)||(f==d+e)){
        cout <<"a,b,c là ba canh cua tam giac vuong";
    }
    else {
        cout <<"a,b,c khong phai la ba canh cua tam giac vuong ";
    }
return 0;
}
