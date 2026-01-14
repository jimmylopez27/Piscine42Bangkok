#include <stdio.h>

int main()
{
 int n; 
 printf("Type your number here: ");
 scanf("%d", &n);

 int i = 1;
 int fact = n;
 while(i < n - 1)
 {
  i++;
  fact *= i;
 } 

 printf("The factorial of %d is %d\n", n, fact); 
 return 0;
}
