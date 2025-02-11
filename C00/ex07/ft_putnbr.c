#include <unistd.h>

void ft_putnbr(int nb) {
  int tmp = nb;
  int to_write;
  char buffer[11];
  int irr = 0;
  while (tmp != 0) {
    to_write = tmp % 10;
    tmp = tmp / 10;
    buffer[irr] = to_write + 48;
    irr++;
  }
  while (irr >= 0) {
    int curr = buffer[irr];
    write(1,&curr,1);
    irr--;
  }
}

int main(void){
  int var = 4224;
  ft_putnbr(var);
  return 0;
}