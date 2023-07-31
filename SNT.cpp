#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a,b,c,d,i,j;
int arr[10001];
void snt (int n)
{
    for (i=2;i<=n;i++)
        arr[i]=1;
    for (i=2;i<=n;i++)
    {
        if (arr[i]!=0)
        {
            for (j=2;j<=n;j++)
            {
                if (arr[i]*j<=n)
                {
                    arr[i*j]=0;
                }
            }   
        }
    }
}
int main()
{
    cin>>a;
    snt(a);
    for (i=1;i<=a;i++)
        cout<<(arr[i])<<(" ")<<(i)<<endl;
}