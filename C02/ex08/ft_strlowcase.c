#include <stdio.h>

char *ft_strlowcase(char *str){
  int irr = 0;
  while (str[irr] != '\0') {
    if (str[irr] >= 65 && str[irr] <= 90) {
      str[irr] = str[irr] + 32;
      ++irr;
    }
    else {
      ++irr;
    }  
  }
  return str;
}

int main(void){
  char res[] = "SHOULD BE LOWERCASE!";
  ft_strlowcase(res);
  printf("%s\n",res);
  return 0;
}