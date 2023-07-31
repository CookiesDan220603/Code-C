#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a,b,c,d,i,j;
int num2,num5;
int arr[10001];
void gt(int n)
{
    for (i=n;i>=1;i--)
    {
        if (i%2==0)
        {
            num2++;
            i/=2;
        }
    }
    for (i=n;i>=1;i--)
    {
        if (i%5==0)
        {
            num5++;
            i/=5;
        }
    }
}
int main ()
{
    cin >>a;
    gt(a);
    cout<<(num2)<<"  "<<(num5);
}