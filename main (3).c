#include <stdio.h>

main()
{
  printf("float -> %d \r\n", sizeof(float));
  printf("int -> %d \r\n", sizeof(int));
  printf("double -> %d \r\n", sizeof(double));
  printf("long -> %d \r\n", sizeof(long));
  printf("char -> %d \r\n", sizeof(char)); //caractere
  printf("long int -> %d \r\n", sizeof(long int)); //inteiro longo 
  printf("short int -> %d \r\n", sizeof(short int)); // inteiro curto

  return 0;
}