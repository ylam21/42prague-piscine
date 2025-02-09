#include <stdio.h>

char *ft_strupcase(char *str){
  int irr = 0;
  while (str[irr] != '\0') {
    if (str[irr] >= 97 && str[irr] <= 122) {
      str[irr] = str[irr] - 32;
      ++irr;
    }
    else {
      ++irr;
    }  
  }
  return str;
}

int main(void){
  char res[] = "this should be uppercase!";
  ft_strupcase(res);
  printf("%s\n",res);
  return 0;
}