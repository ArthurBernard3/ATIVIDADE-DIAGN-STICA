#include <stdio.h>

int main(){
 
 int maquinas,pecas,horas,maquinas_n;
 maquinas = 8;
 pecas = 120;
 horas = 5;
 maquinas_n = 10;

 int producaopormaquina = pecas / (maquinas * horas);

 int producaototal = maquinas_n * producaopormaquina * horas;

 printf("A producao total e: %d\n", producaototal);
 
 return 0;


    






}