#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int a,b,c,d,i,j;
int num2,num5;
int arr[10001];
void gt(int n)
{
  int i=n;
  while (i>1)
  {
    if(i%2==0)
    {
        num2++;
        i/=2;
    }
    else 
    {
        i--;
    }
  }
  i=n;
  while (i>1)
  {
    if(i%5==0)
    {
        num5++;
        i/=5;
    }
    else 
    {
        i--;
    }
  }
}
int main ()
{
    cin >>a;
    gt(a);
    cout<<(num2)<<"  "<<(num5);
}