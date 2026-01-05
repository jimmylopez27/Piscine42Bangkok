#include <stdio.h>

int main()
{
 printf("Type your number here: ");
 int num;
 scanf("%d", &num);

 if (num % 2 == 0)
 {
  printf("The number is even");
 }
 else
 {
  printf("The number is odd");
 }

 return 0;
}
