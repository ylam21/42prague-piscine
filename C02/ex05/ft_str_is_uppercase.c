/// 65
// 90
#include <stdio.h> 

int ft_str_is_uppercase(char *str) {
 int irr = 0;
  while (str[irr] != '\0') {
    if (str[irr] >= 65 && str[irr] <= 90) {
      ++irr;
    }
    else {
      return 0;
    }
  }
  return 1;
}
int main(void) {
  int res = ft_str_is_uppercase("AAAAAAADDDDD");
  printf("%d\n",res);
  return 0;
}