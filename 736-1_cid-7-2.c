#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int i,j,k,size;
int temp;
 
scanf("%d", &size); 
float s=0;
float p=0;
int massive[size];

clock_t start = clock(); 

//for (int m=0; m<100; m++)
//{
 
//srand(time(NULL));
for (i=0;i<size; i++) 
{ 

massive[i]= size-i; 

}

for (k=size/2; k>0; k/=2)
{
	for(i = k; i < size; i++)
        {
	   temp = massive[i];
            for(j = i; j>=k; j-=k)
            {
                s++;
		if(temp < massive[j-k])
                {
	   	massive[j] = massive[j-k];
		p++;
		}
                else
                    break;
            }
            massive[j] = temp;
        }
}
//}

clock_t end = clock(); 
double seconds = (double)(end - start) / CLOCKS_PER_SEC; 
printf("The time: %f seconds\n", seconds);
for (i=0;i<size; i++) 
{ 
printf ("%d ", massive[i]); 

} 

printf ("sravneniya %f ", s);
printf ("perestanovki %f ", p); 


return 0;
}














