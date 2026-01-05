#include <stdio.h>

int main()
{
 printf("Type your number here: ");
 int num;
 scanf("%d", &num);

 if(num % 2 == 0 || num % 3 == 0)
 {
  printf("The number %d is not a prime number", num);
 }
 else
 {
  printf("The number %d is a prime number \n", num);
 }

 return 0;
}
