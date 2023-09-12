#include <string.h>

main(){
    //Atividade numero 10

  float custoFabrica, custoFinal, imposto = 0.45, distribuidor = 0.28;

  printf("Digite o custo de fabrica do carro: ");
  scanf("%f", &custoFabrica);

  custoFinal = (custoFabrica * distribuidor) + (custoFabrica * imposto) + custoFabrica;

  printf("O valor final do carro é: %.1f", custoFinal);
}
