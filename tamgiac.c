#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,a1,b1,c1;
	printf("Enter a, b, c: \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&a+c>b&&b+c>a&&a>0&&b>0&&c>0)
	{	
		a1=a*a;
		b1=b*b;
		c1=c*c;
		printf ("Ba canh tao thanh mot tam giac\n");
		if (a==b &&b==c)
			printf ("Day la tam giac deu\n");
		else if (a==b || b==c || a==c)
			printf ("Day la tam giac can\n");
		else if (a1==b1+c1 || b1==a1+c1 || c1==a1+b1)
			printf("Day la tam giac vuong\n");
		int p=(a+b+c)/2;
		int s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf ("Dien tich tam giac la : %d \n",s);
	}
	else
		printf ("Ba canh khong tao thanh tam giac");

}