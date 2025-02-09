
#include <stdio.h>
char *ft_strcapitalize(char *str) {
  int irr = 0;
  while (str[irr] != '\0') {
    if ((str[irr]>=97)&&(str[irr] <= 122)&&(irr == 0)) {
      str[irr] -= 32;
    }
    if ((65 > str[irr-1])&&(str[irr-1] > 90)&&(97 > str[irr-1])&&(str[irr-1] > 122)&&(str[irr]>=97)&&(str[irr] <= 122)) {
      str[irr] -= 32;
    }
    ++irr;
  }
  return str;
}

int main(void) {
  char sup[] = "this is my new sentence. i hope it works";
  printf("%s\n",sup);
  return 0;
}