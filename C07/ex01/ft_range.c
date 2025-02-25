#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max) {
  int size = max - min;
  int *arr = malloc(sizeof(int) * (size));
  if (!arr)
    return NULL;
  int i = 0;

  if (min >= max)
    return NULL;

  while (i < (size))
    arr[i++] = min++;
  return arr;
}


int main(void) {
  int low = 4;
  int high = 4;
  int *res = ft_range(low,high);
  for (int i = 0;i < (high - low);i++) {
    printf("%d ",res[i]);
  }
  if (res)
    free(res);
  return 0;
}