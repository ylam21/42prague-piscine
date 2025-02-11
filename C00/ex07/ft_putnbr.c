  #include <unistd.h>

  void ft_putnbr(int nb) {
    char buffer[11];
    int irr = 0;

    if (nb == 0) {
      write(1,"0",1);
      return;
    }
    else if (nb < 0){
    write(1,"-",1);
    if (nb == -2147483648) {
          write(1,"2147483648",10);
          return;
    }
    nb = -nb;
    }


  while (nb > 0) {
    buffer[irr] = (nb % 10) + 48;
    nb = nb / 10;
    irr++;
  }
  while (irr > 0) {
    write(1,&buffer[--irr],1);
  }

}


// int main(void){
//   ft_putnbr(-2);
//   return 0;
// }