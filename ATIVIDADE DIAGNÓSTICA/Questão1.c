#include <stdio.h>


int main() {
 float celsius,fahrenheit;
 
 
 printf(" temperatura em graus celsius: ");
 scanf("%f", &celsius);

 fahrenheit =  (celsius * 1.8) + 32;

 printf( "A temperatura em Fahrenheit é: %.2f \n " , fahrenheit );
  return 0;
}

