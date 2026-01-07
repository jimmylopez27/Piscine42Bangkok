#include <stdio.h>
#include <math.h>

int main()
{
 printf("Type your number here: ");
 int num = 0;
 scanf("%d", &num);

 while (num != 0)
 {
  for (int i = 1; i < 2; i++)
  {
   int div = pow(10, i);
   float remnum = num % div;
   return remnum;
  }
 
 num = remnum; 
 printf("%d", num); 

 };

 return 0;
}
