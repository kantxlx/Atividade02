#include <string.h>

main(){
    //Atividade numero 6

  float custo, frete, despesa, venda, lucro;

  printf("Digite o valor da mercadoria: ");
  scanf("%f", &custo);

  printf("\nDigite o valor do frete da mercadoria: ");
  scanf("%f", &frete);

  printf("\nDigite agora o valor das despesas: ");
  scanf("%f", &despesa);

  printf("\nDigite o valor de venda: ");
  scanf("%f", &venda);

  float soma = custo + frete + despesa;
  lucro = (venda - soma);
  float lucroEmPorcentagem = (lucro / soma) * 100;
  
  

  printf("\nEsse foi a porcentagem do seu lucro: %.2f%%", lucroEmPorcentagem);
}
