#include <stdio.h>
#include <math.h>

int main()
{
  printf("Type your number here: ");
  int num;
  scanf("%d", &num);
  printf("The reverse of the number %d is : ", num);
  for (int i = 1; i < 10; i ++ )
  {
   int div = pow(10, i);
   int rem = (num * 10 / div) % 10;
   printf("%d", rem);
   
   if (rem < 1 )
   {
    break;
   }
  };

 return 0;
}
