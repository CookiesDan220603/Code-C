#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n,m,q,i,j,a[1000],b[1000],c,d;
bool kt;
ifstream fi ("GRAPH4.INT");
ofstream fo ("GRAPH4.OUT");
int main (){
fi >>n>>m>>q;
for (i = 1;i<=m;i++)
    fi >>a[i]>>b[i];
for (j=1;j<=q;j++)
    {
    fi >>c>>d;
    for (i =1;i<=m;i++)
        {
        if (((a[i]==c)&&(b[i]==d) ) || ((a[i]==d)&&(b[i]==c)))
        {
               kt=true;
               break;
        }

        else kt = false;}

    if (kt == true )
        fo <<"YES"<<endl;
    else
        fo <<"NO"<<endl;
    }

fi.close();
fo.close ();
return 0;
}
