#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
   setlocale(LC_ALL,"Portuguese");

   int velocidadedoveiculo, velocidadedavia, valorapagar;



   printf("\nQual a Velocidade da via: ");
   scanf("%d", &velocidadedavia);
   printf("\nQual a Velocidade Do Veiculo?: ");
   scanf("%d", &velocidadedoveiculo);
   valorapagar = (velocidadedavia - velocidadedoveiculo)*5;


   if(velocidadedoveiculo <=120){
   printf("Sem Multas No Sistema");
   scanf("%d", velocidadedoveiculo);
   system("cls || clear");
   }

   else {
   printf("\nValor a Pagar\n");
   scanf("%d", &valorapagar);
   system("cls || clear");
   }





return 0;
}
