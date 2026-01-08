#include <stdio.h>

int main()
{
 printf("Type your number here: ");
 int num = 0; 
 scanf("%d", &num);

 printf("Reverse: ");
 while (num != 0)
 {
  int digits = num % 10;
  printf("%d", digits);
  num = num / 10;   
 }

 printf("\n");
 return 0;

}
