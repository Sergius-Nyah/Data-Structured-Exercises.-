// Checks the number of times a number appears in an array of random numbers. 
#include<stdio.h>
#include<stdlib.h>
int up_bound = 10;   // No random digit should be > 10
int how_many(int array[], int size, int value)  // Driver code, checks repeated digits. 
{
    int i, count = 0;
    for(i=0;i<size;i++)
    {
        if(array[i] == value) 
        count++;
    }
return count;
}
void randomize(int arr[], int size, int up_bound)  // Initialises and stores random numbers in an array
{
    int i;
    for(i=0;i<size;i++)
    {
    arr[i]=rand() % up_bound;
    }
    for(i=0;i<size;i++) 
    {
        printf("%d\n", arr[i]);
    }
}
int main(void)
{
   int arr[20],i;
    int size =sizeof(arr)/sizeof(arr[0]);
    randomize(arr, size, up_bound);
    printf("Value\t Times appeared\n");
  for(i=0; i<up_bound; i++)
  {
    printf("%d\t%d\n", i, how_many(arr, size, i));
  }
   
return 0;
}






 


