#include <stdio.h>
#include <math.h>

int main()
{
  printf("Type your number here: ");
  int num;
  scanf("%d", &num);
  for (int i = 1; i < 4; i ++ )
  {
   int div = pow(10, i);
   printf("%d\n", div);
   int rem = num % div;
   printf("%.1d\n", rem);
   
   num = rem;   
  };
 
 }

 
/*  printf("\nType the number here: ");
 int num;
 scanf("%d", &num);

 float remaindernum =  num % 10; 
 float wholenum = (num / 10); 
 
 printf("Whole number: %.0f \nRemainder: %.0f \n", wholenum, remaindernum);

 printf("The reverse of the number %d is: %.0f%.0f\n\n", num, remaindernum, wholenum);
 
 return 0; */  

