#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
  int size = max - min;
  *range = malloc(sizeof(int) * size);
  
  if (min >= max) {
    (*range) = NULL;
    return 0;
  }
  
  int i = 0;
  while (i < size)
    (*range)[i++] = min++;
  return size;
}


// int main(void) {
//   int min = 2;
//   int max = 6;
//   int *ptr1;
//   int **dptr = &ptr1;
//   int size = ft_ultimate_range(dptr,min,max);
//   for (int i = 0; i < size;i++) {
//     printf("%d", (*dptr)[i]);
//   }
//   return 0;
// }