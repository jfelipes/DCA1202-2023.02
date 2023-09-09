#include <stdio.h>

int main(void){
  int pulo[4]= {100,101,102,103};
  
  printf("%d\n",*(pulo + 2));
  printf("%d\n",*(pulo + 3));
  printf("%p\n",pulo + 3);
  printf("%p\n",pulo + 2);
}