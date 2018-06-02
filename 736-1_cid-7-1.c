#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>





int main()
{
	int size,step,tmp,i,j,m;
	int p=0;
int s=0;

	printf("Vvedite razmer massiva \n ");
	scanf("%d",  &size);

step=size;

	int massive[size];

	clock_t start = clock();


for (m=0; m<100; m++)


{
	srand(time(NULL));
	for (i=0; i<size; i++)
	{
		massive[i]= rand() % 100;
	
	}



	while (step>=1)
	{
		for (i=0; i+step<size; i++)
		{	
			s++;
			if (massive[i]>massive[i+step])
			{
				tmp=massive[i];
				massive[i]=massive[i+step];
				massive[i+step]=tmp;
				p++;
			}

		}
		
		step=step/1.24;
			
	}	

}
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("The time: %f seconds\n", seconds/100);
	for (i=0;i<size; i++)
	{
		printf ("%d ", massive[i]);
		
	}



	printf ("sravneniya %d ", s);
	printf ("perestanovki %d", p);
	printf("\n");
	
	return 0;
}














