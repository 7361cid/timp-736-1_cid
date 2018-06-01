#include <stdio.h>

int main ()
{

	int a,b,c,i;

	
	c=0;
	scanf ("%d",&a);

	for (i=1;i<=a;i++)
	{	
		scanf ("%d", &b);
		c=c-b;

	}	

	printf("%d\n",c);



	return 0;
}
