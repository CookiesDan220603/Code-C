#include <stdio.h>
#include <math.h>
#define PI 3.14
int main ()
{
	float x,y1,y2,y3,y4,val;
	val=PI/180.0;
	printf("Enter x : \n");
	scanf("%f",&x);
	y1=pow(2,3)+pow(5,2)+7*x +15;
	y2=pow(sin(x*val),2)+pow(cos(2*x*val),2)+pow(tan(val*x*3),2);
	y3=pow((x+10),(x+5));
	y4=log10(x+100);
	printf ("gia tri y1 la %f\n",y1);
	printf ("gia tri y2 la %f\n",y2);
	printf ("gia tri y3 la %f\n",y3);
	printf ("gia tri y4 la %f\n",y4);


}