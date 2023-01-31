#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main (void)
{
int the_number;
printf("Enter the number you wish to reverse:\n");
scanf("%d", &the_number);
  if(the_number>0)
  {
int length = floor(log10(abs(the_number))) + 1;  //Gets the length of the interger. 
int lastDigit = the_number%(10^(length-1));
int firstDigit = the_number/(10^(length-1));
printf("%i%i\n",lastDigit,firstDigit);
  }
  else
    printf("Invalid number, Enter a positive number"); 
return 0;
}

