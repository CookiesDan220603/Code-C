#include <stdio.h>
int main ()
{
	
	int n;
	int max =0;
	do
	{
		printf ("Enter n: \n");
		scanf ("%d", &n);
		if (n>max)
		{
			max=n;
		}
	}
	while (n>=0);
	printf ("gia tri nho nhat la %d",min);
}