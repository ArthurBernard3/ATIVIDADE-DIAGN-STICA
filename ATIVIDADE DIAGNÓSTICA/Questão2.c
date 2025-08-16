 #include <stdio.h>

int main(){
 float salariobase,valordahoraextra;
 int horasextras;

  printf("Digite o valor do salario base:");
  scanf("%f", &salariobase);

  printf("Digite o valor da hora extra:");
  scanf("%f", &valordahoraextra);

  printf("Digite a quatidade de horas extras:");
  scanf("%d" , &horasextras);

  float valortotal = (valordahoraextra * horasextras) + salariobase;
  printf("O funcionario recebera o valor total de: %.2f \n", valortotal );
  
   return 0;




  

}

