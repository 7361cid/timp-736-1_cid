#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double  p=0;

double  s=0;


void siftDown(int *numbers, int root, int bottom)
{
  int maxChild; 
  int done = 0; 
  
 while ((root * 2 <= bottom) && (!done)) 
  {
    
	if (root * 2 == bottom)    
      	{
		maxChild = root * 2;    
    		
	}	
    else if (numbers[root * 2] > numbers[root * 2 + 1])
	{
      		maxChild = root * 2;
		
    	}
	else
      maxChild = root * 2 + 1;
    s++;
    if (numbers[root] < numbers[maxChild]) 
    {
      int temp = numbers[root]; 
      numbers[root] = numbers[maxChild];
      numbers[maxChild] = temp;
      p++;	
      root = maxChild;
    }
    else 
      done = 1;  }
}

void heapSort(int *numbers, int array_size) 
{
 for (int i = (array_size / 2) - 1; i >= 0; i--)
    siftDown(numbers, i, array_size);

  for (int i = array_size - 1; i >= 1; i--)
  {
    int temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    p++;	
    siftDown(numbers, 0, i - 1);
  }
}



int main() 
{ 
int i,size; 
 
 
scanf("%d", &size); 
int massive[size]; 


clock_t  start = clock(); 
for (int m=0; m<100; m++)
{
srand(time(NULL)); 
for (i = 0; i < size; i++) 
{ 
massive[i]= rand() % 100;   
}

heapSort(massive,size);
}

clock_t end = clock(); 
double seconds = (double)(end - start) / CLOCKS_PER_SEC; 
printf("The time: %f seconds\n", seconds/100);

for (i=0;i<size; i++) 
{ 
printf ("%d ", massive[i]); 

}
printf ("sravneniya  %f ", s/100);
printf ("perestanovki %f ", p/100); 
printf("\n");


return 0; 
}












