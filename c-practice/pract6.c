#include <stdio.h>

int main()
{
 int n;
 printf("Type your number here: ");
 scanf("%d", &n);

 if ((n % 2) == 0 || (n % 3) == 0 )
 {
  printf("The number %d is NOT A PRIME NUMBER\n", n);
 }
 else
 {
  printf("The number %d is a PRIME NUMBER\n", n);
 }
 
 return 0;
}
