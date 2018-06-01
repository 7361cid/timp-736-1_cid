#include <stdio.h>

int main()
{
	int i,count1,count2,a;
	char simbol;
	count1=0;
	count2=0;
	
	scanf("%d\n",&a);

	for (i=0; i<=a; i++)
	{
		scanf("%c\n", &simbol);
               
		if (simbol=='(')
		{
			 count1++;
		}
		if (simbol==')')
		{
			 count2++;
		}

		if (count1==0 && count2==1 )
                

			{
			printf ("0\n" );
			return 0;

			}	

	}

	if (count1==count2)
	printf ("1\n");
	if (count1!=count2)
 	printf ("0\n");
	return 0;
}


