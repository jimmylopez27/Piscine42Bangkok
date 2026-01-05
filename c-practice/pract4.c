#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("Type the number here: ");
 int num;
 scanf("%d", &num);
 
 int fact;
 
 for (int i = 1; i <= num; i ++)
 {
  fact *= i; 

 } 
 
 printf("The factorial of %d! is: %d \n",num, fact);
 
 return 0;
}
