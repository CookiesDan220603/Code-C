#include <stdio.h>
int main ()
{
	
	int n;
	int min=2147483647;
	do
	{
		printf ("Enter n: \n");
		scanf ("%d", &n);
		if (n>=0)
		{
			if (n < min)
				min = n;
		}
		
	} while (n > 0);
	printf ("gia tri nho nhat la %d \n",min);
}