#include <stdio.h>
#include <stdlib.h>

int get_len(char *str) {
  int len = 0;
  while (str[len])
    len++;
  return len;
}

int acc_len(int size, char **strs) {
  int i = 0;
  int acc = 0;
  while (i < size)
    acc += get_len(strs[i++]);
  return acc;
}

char *ft_strjoin(int size, char **strs, char *sep) {
  int total_len = acc_len(size,strs) + size;
  char *joined = malloc(sizeof(char) * total_len);
  int i = 0;
  int index = 0;
  int j;
  while (i < size) {
    j = 0;
    while (strs[i][j]) {
      joined[index++] = strs[i][j++];
    }
    joined[index] = *sep;
    i++;
  }
  return joined;
}

int main(void) {
  char *ptr[] = {{"abc"},{"ABC"},{"okey"}};
  char *sep = "X";

  char *joined = ft_strjoin(3,ptr,sep);
  printf("%s",joined);

  return 0;
}