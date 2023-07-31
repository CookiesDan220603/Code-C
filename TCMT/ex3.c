#include <stdio.h>
#include <ctype.h>
int main ()
{	
	int i,check=1;
	char s[]={'a','e','i','o','u'};
	char c;
	printf ("Enter character: \n");
	scanf("%c",&c);
	char b=tolower(c);
	for(i=0;i<5;i++)
	{	
		if (b==s[i])
		{
			printf ("Day la nguyen am\n");
			check =0;
		}
	}
	if (check ==1)
		printf ("Day la phu am\n");
}