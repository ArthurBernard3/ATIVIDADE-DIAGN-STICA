#include <stdio.h>
#include <math.h>

int main(){
 float raio;
 const float pi = 3.14;


  printf("Digite o valor do raio: ");
  scanf("%f" , &raio);
  
  float perimetro = (2 * raio * pi );
  printf("O perimetro do circulo e: %.2f \n", perimetro );

  float area = pi * pow(raio, 2);
  printf("A area do circulo e: %.2f\n", area);


 return 0;



}
