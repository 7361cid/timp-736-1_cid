#include <stdio.h>
#include <time.h>
#include <stdlib.h>




float p=0;

float  s=0;

void hoarasort(int* massive, int left, int right)
{
 
int i = left;
int j = right;
int tmp;
int  x = massive[(left + right) / 2];
 
do {
   while (massive[i] < x)
     i++;
   	
   while (massive[j] > x)
     j--;
    
   if (i <= j) 
   {
     
	if (i < j)
     {
        tmp=massive[i];
        massive[i]=massive[j];
        massive[j]=tmp;
	p++;
	s++;
     }
     i++;
     j--;
     s++;	
   }
    
} while (i <= j);
 
if (i < right)
{	
   	
	hoarasort(massive, i, right);
}
if (left < j)
{
   	
	hoarasort(massive, left,j);
}	
	
}







int main() 
{ 
int i,size; 

 
scanf("%d", &size); 
 
int massive[size]; 
int m=0;

clock_t start = clock();  

//while  (m<100)
//{
//srand(time(NULL));
        for (i = 0; i < size; i++)
        {
                massive[i] =5; // диапазон случайных чисед от 0 до 100

        }



hoarasort (massive, 0, size-1);
m++;
//}
clock_t end = clock(); 
double seconds = (double)(end - start) / CLOCKS_PER_SEC; 
printf("The time: %f seconds\n", seconds);
for (i=0;i<size; i++) 
{ 
printf ("%d ", massive[i]); 

}

printf("\n");
printf ("sravneniya %f ", s);
printf ("perestanovki %f", p); 
printf("\n");   



return 0; 
}








