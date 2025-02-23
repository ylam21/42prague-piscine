#include <unistd.h>
#include <stdio.h>

void write_str(char *str) {
  int i = 0;
  while (str[i])
    write(1,&str[i++],1);
  write(1,"\n",1);
}

void ft_write_arg(int argc, char *argv[]) {
  int i = 1;
  while (i < argc)
    write_str(argv[i++]);
}


void ft_str_swap(char *arr[],int i, int j) {
  char *tmp = arr[i];
  arr[i] = arr[j];
  arr[j] = tmp;
}

int ft_strcmp(char *s1, char *s2) {
  int i = 0;
  while (s1[i]) {
    if (s1[i] < s2[i])
      return s1[i] - s2[i];
    else if (s1[i] > s2[i])
      return s1[i] - s2[i];
    i++;
  }
  return s1[i] - s2[i];
}

int get_len(char *str) {
  int len = 0;
  while(str[len])
    len++;
  return len;
}

void ft_sort_arg(int argc, char *argv[]) {
  int size = argc;
  int i = 1;
  int j;
  while (i < size) {
    j = i + 1;
    while (j < size) {
      if (get_len(argv[i]) > get_len(argv[j]))
        ft_str_swap(argv,i,j);
      else if (get_len(argv[i]) == get_len(argv[j])) {
        if (ft_strcmp(argv[i],argv[j]) > 0)
          ft_str_swap(argv,i,j);
        }
      j++;
    }
    i++;
  }
}

int main(int argc, char *argv[]) {
  if (argc != 1)
    ft_sort_arg(argc,argv);
  ft_write_arg(argc, argv);
  return 0;
}