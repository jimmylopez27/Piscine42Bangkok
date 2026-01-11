#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n;
 printf("Enter how many numbers you want: ");
 scanf("%d", &n);

 int *pmem;
 pmem = malloc(n * sizeof(int));

 if (pmem == NULL)
 {
  printf("Memory Allocation FAILED!");
  return 1;
 }
 
 int arrnum[*pmem];
 
 for (int i = 0; i < n; i ++)
 {
  printf("Type number %d: ",i );
  scanf("%d", &arrnum[i]);
 }

 int num = arrnum[0];
 for (int i = 1; i < n; i ++)
 {
  if (num != arrnum[i])
  {
    printf("%d", num);
  }
  
  num = arrnum[i];
  
 } 
 

 free(pmem);

 return 0;
}
