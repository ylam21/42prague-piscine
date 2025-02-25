#include <stdlib.h>

int get_len(char *str) {
  int len = 0;
  while (str[len])
    len++;
  return len;
}

char *ft_strdup(char *src) {
  char *copy = malloc(sizeof(char) * get_len(src));
  if (!copy)
    return NULL;
  int i = 0;
  while (src[i]) {
    copy[i] = src[i];
    i++;
  }
  return copy;
}

#include <stdio.h>

int main(void) {
  char *source = "Hel11lo";
  char *copy = ft_strdup(source);
  printf("%s",copy);
  if (copy)
    free(copy);
  return 0;
}