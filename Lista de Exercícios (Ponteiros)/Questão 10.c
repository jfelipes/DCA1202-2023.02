#include <stdio.h>

int main(){
  char x[4] = { 1, 2, 3 ,4 };

  printf("%p\n", x+1);
  printf("%p\n", x+2);
  printf("%p\n", x+3);

  int y[4] = { 1, 2, 3 ,4 };

  printf("%p\n", y+1);
  printf("%p\n", y+2);
  printf("%p\n", y+3);

  float z[4] = { 1, 2, 3 ,4 };

  printf("%p\n", z+1);
  printf("%p\n", z+2);
  printf("%p\n", z+3);
  
  double w[4] = { 1, 2, 3 ,4 };

  printf("%p\n", w+1);
  printf("%p\n", w+2);
  printf("%p\n", w+3);
}