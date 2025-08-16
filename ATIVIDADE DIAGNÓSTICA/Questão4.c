#include <stdio.h>
#include <locale.h>


int main(){
 
 float precoproduto,desconto;

 printf("Informe o preco do produto:");
 scanf("%f", &precoproduto );

 printf("Digite o porcentual de desconto: ");
 scanf("%f", &desconto );

 float valorcomdesconto = precoproduto - (precoproduto * desconto / 100 );
 printf("O valor do produto com desconto e: R$ %.2f\n", valorcomdesconto );
 
 return 0;
 }