#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("Type the number here: ");
 int num;
 scanf("%d", &num);
 
 int newarrangement = 0 ;

 for(int i = num; i > 0; i --)
 {
  newarrangement = i;
  printf("%d\n", newarrangement);
 }

 return 0;
}
