#include <stdio.h>
int main ()
{
	int muc1=350000,muc2=400000,muc3=450000,muc4=500000,muc5=550000;
	int n,tien;
	printf ("Nhap so tien dien thang do : \n");
	scanf("%d",&n);
	if (n<=100)
		tien = n*muc1;
	else if (100<n&&n<=150)
		tien = muc1*100 + (n-100)*muc2;
	else if (150<n&&n<=200)
		tien= 100*muc1 + 50*muc2 +(n-150)*muc3;
	else if(200<n&&n<=300)
		tien =100*muc1 + 50*muc2 +50*muc3 + (n-200)*muc4;
	else if(300<n)
		tien = 100*muc1 + 50*muc2 + 50*muc3 + 100*muc4 +(n-300)*muc5;
	printf ("So tien phai tra cho %dkWh la : %d ",n,tien);
}