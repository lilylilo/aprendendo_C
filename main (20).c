#include <stdio.h>

int main(void) {
  int a = 32;
  int b = 64;

  printf("%d %d \n", a,b);
  printf("%x %x \n", a,b);
  
  b = &a;
  printf("%d %d \n", a,b);
  
  return 0;
}