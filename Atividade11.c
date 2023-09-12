#include <string.h>

main(){

    //Atividade numero 11

  float carros, vendas, salario, valorCarro, comissao = 0.05;

  printf("Digite quantos carros foram vendidos: ");
  scanf("%f", &carros);

  printf("\nDigite o valor total das vendas: ");
  scanf("%f", &vendas); 

  printf("\nDigite o salario: ");
  scanf("%f", &salario);

  printf("Digite a comissão por carro vendido: ");
  scanf("%f", &valorCarro);

  float SalarioFinal = salario + (carros * valorCarro) + (vendas * comissao);

  printf("Valor final recebido: %.1f", SalarioFinal);
  
}
