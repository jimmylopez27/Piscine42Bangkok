#include <stdio.h>

int main()
{
 int n;
 printf("How many numbers you want to add?: ");
 scanf("%d", &n);
 printf("\nType your numbers: \n");
 
 int sum = 0;
 int num;
 for (int i = 0; i < n; i ++)
 {
  printf("\nNumber %d: ", i+1);
  scanf("%d",&num);
  sum += num;
 } 

 printf("\nThe sum of the numbers is %d\n", sum);
 
 return 0;
}
