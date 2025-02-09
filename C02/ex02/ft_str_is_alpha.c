// 0 = 48;
// 9 = 57;
#include <stdio.h>
int ft_str_is_alpha(char *str) {
  int irr = 0;
  while (str[irr] != '\0') {
    if (48 <= str[irr] && str[irr] <= 57) {
      return 0;
    }
    else {
      ++irr;
    }
  }
   return 1;
}

int main(void) {
  char *string = "2 1orld";
  int result = ft_str_is_alpha(string);
  printf("%d\n",result);
  return 0;
}