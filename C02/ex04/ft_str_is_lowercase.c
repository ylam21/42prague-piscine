/// 97
// 122
#include <stdio.h> 

int ft_str_is_lowercase(char *str) {
 int irr = 0;
  while (str[irr] != '\0') {
    if (str[irr] >= 97 && str[irr] <= 122) {
      ++irr;
    }
    else {
      return 0;
    }
  }
  return 1;
}
int main(void) {
  int res = ft_str_is_lowercase("oA");
  printf("%d\n",res);
  return 0;
}