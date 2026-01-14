#include <stdio.h>

int main()
{
 int n;
 printf("Type your number here: ");
 scanf("%d", &n);

 if ((n % 2) == 0)
 {
  printf("The number is an EVEN number\n");
 }
 else
 {
  printf("The number is an ODD number\n");
 }

 return 0;
}
