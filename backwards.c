#include <stdio.h>
#include<stdlib.h>
int main (void)
{
int number = 711;
int lastDigit = number%100;
int firstDigit = number/100;
printf("%i%i\n",lastDigit,firstDigit);
}
