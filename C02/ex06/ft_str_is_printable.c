// 0
// 31

#include <stdio.h> 

int ft_str_is_printable(char *str) {
 int irr = 0;
  while (str[irr] != '\0') {
    if (str[irr] >= 0 && str[irr] <= 31) {
      ++irr;
    }
    else {
      return 0;
    }
  }
  return 1;
}
int main(void) {
  int res = ft_str_is_printable("AAAAAAADDDDD");
  printf("%d\n",res);
  return 0;
}