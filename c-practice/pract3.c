#include <stdio.h>

int main()
{
 int n; 
 printf("Type your number here: ");
 scanf("%d", &n);

 printf("The product of %d from 1 to 10 are: \n", n);
 for (int i = 1; i < 11; i ++)
 {
  printf("%d. %d\n", i, n * i ); 
 } 

 return 0;
}
