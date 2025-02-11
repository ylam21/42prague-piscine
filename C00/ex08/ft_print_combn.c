#include <stdio.h>
#include <unistd.h>

int ft_pow(int num, int power);
int ft_lastnumbertoprint(int num, int n) {
  int target = num / ft_pow(10,n-1);
  int real = 10 -n;
  if (num==9 && n == 1) {
    return 1;
  }
  if (real == target) {
    return 1;
  }
  
  return 0;
}
int ft_digitcnt(int num) {
  if (num == 0) {
    return 1;
  }
  int counter = 0;
  while (num) {
    num = num / 10;
    counter++;
  }
  return counter;
}

int ft_increasing(int num) {
  if (num < 10) {
    return 0;
  }
  int tmp = 0;
  while (num > 0) {
    if (tmp > (num%10)) {
      return 0;
    }
     tmp = num%10;
     num = num / 10;
  }
  return 1;
}

int ft_checknumber(int num) {
  if (num < 10) {
    return 1;
  }
  int prev = num % 10;
  num = num / 10;
  while (num > 0) {
    int curr = num % 10;
    if(curr >= prev) {
      return 0;
    }
    prev = curr;
    num = num / 10;
  }
  return 1;
}

  void ft_putnbr(int nb, int n) {
    char buffer[11];
    int irr = 0;
    int zeros = 0;
    int catch = nb;

    if (nb == 0) {
      write(1,"0",1);
      return;
    }

  while (nb > 0) {
    buffer[irr] = (nb % 10) + 48;
    nb = nb / 10;
    irr++;
  }
    zeros = n - ft_digitcnt(catch);
      while (zeros > 0) {
        write(1,"0",1);
        zeros--;
      }
  while (irr > 0) {
    write(1,&buffer[--irr],1);
} 
   if (ft_lastnumbertoprint(catch,n) == 0) {
    write(1,",",1);
    write(1," ",1);
   }

}

int ft_isrepdigit (int num, int n) {
int buff[11];
int counter = 0;
if (num < 10) {
  if (n > 2) {
    return 1;
  }
  return 0;
}
while(num) {
  buff[counter] = num % 10;
  if (counter > 0 && buff[counter] != buff[counter-1]) {
    return 0;
  }
  counter++;
  num = num / 10;
}
return 1;
}


int ft_pow(int num, int power) {
  int counter = 1;
  int tmp = num;
  while (counter < power) {
    num = tmp * num;
    counter++;
  }
return num;
}

void ft_print_combn(int n) {
  int crr = 0;
  while (crr < ft_pow(10,n)) {
    if(ft_isrepdigit(crr,n) == 1) {
      crr++;
    }
    else if ((crr%10)==0){
      crr++;
    }
    else if (ft_checknumber(crr) == 0){
      crr++;
    }
    else {
      ft_putnbr(crr, n); 
      crr++;
    } 
   }
 }


// int main(void) {
//   int var = 3;
//   // printf("result:%d",ft_checknumber(4584));
//   ft_print_combn(var);
//   // printf("%d",ft_lastnumbertoprint(899,var));
//   // printf("<%d>\n",ft_increasing(111));
//   return 0;
// }