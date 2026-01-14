#include <stdio.h>

int main()
{
 int n;
 printf("Type your number here: ");
 scanf("%d", &n);

 int fact = n;
 for (int i = 1; i < n; i ++)
 {
  fact *= i;
 }

 printf("The factorial of the number %d is %d\n",n, fact);

 return 0;
 
}
