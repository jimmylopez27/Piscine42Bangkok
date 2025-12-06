#include <stdio.h>
#include "funchead.h"

int main()
{
 int num_one; 
 int num_two;

 printf("\n");
 printf("Type your first number here: ");
 scanf("%d", &num_one);
 printf("Type your second number here: ");
 scanf("%d", &num_two);
 printf("\n");

 int sum = add(num_one, num_two);
 int diff = sub(num_one, num_two);
 
 printf("The sum of %d and %d is %d\n",num_one, num_two, sum);
 printf("The difference of %d and %d is %d\n\n",num_one, num_two, diff);
 
 return 0;

}
