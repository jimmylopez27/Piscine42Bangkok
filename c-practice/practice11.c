#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("How many numbers you want? ");
 scanf("%d", &n);

 int *pmem = malloc(n * sizeof(int));

 if (pmem == NULL)
 {
  printf("Memory allocation FAILED!");
  return 1;
 }

 for (int i = 0; i < n; i ++)
 {
  printf("Type your number %d: ", i);
  scanf("%d", &pmem[i]);
 } 

 for (int i = 0; i < n; i ++)
 {
  int count = 0;
  
  for (int j = 0; j < n; j ++)
  {
   if (pmem[i] == pmem[j])
   {
    count ++;
   }
  } 
  
  if (count == 1)
  {
   printf("The unique number is: %d\n", pmem[i]);
  }
 }
 
 free(pmem);

 return 0;
}
