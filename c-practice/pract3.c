#include <stdio.h>

int main()
{
 printf("Type your number here: ");
 int num;
 scanf("%d", &num);

 printf("The product of teh number %d from 1 to 10 are below: \n", num);

 for(int i = 1; i < 11; i ++)
 {
  printf("%d \n", i * num);
 } 

 return 0;
}
