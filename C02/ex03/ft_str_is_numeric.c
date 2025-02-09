
#include <stdio.h>

int ft_str_is_numeric(char *str) {
  int irr = 0;
  while (str[irr] != '\0') {
    if (48 <= str[irr] && str[irr] <= 57) {
    ++irr;
    }
    else {
      return 0;
    }
  }
  return 1;
}

int main(void) {
  int res = ft_str_is_numeric("");
  printf("%d\n",res);
  return 0;
}