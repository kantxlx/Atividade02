#include <string.h>

main(){
    //Atividade numero 1
  printf("\n-----VARIAS MULTIPLICAÇÕES EM UMA-----\n");

  int numero1;
  printf("\nDigite o primeiro numero: ");
  scanf("%d", &numero1);
  
  int numero2;
  printf("\nDigite o segundo numero: ");
  scanf("%d", &numero2);

  int adição = numero1 + numero2;
  int sub = numero1 - numero2; 
  int divisao = (float)numero1 / numero2;
  int multiplicacao = numero1 * numero2;

  printf("\nValor da adição: %d", adição);
  printf("\nValor da subtração: %d", sub);
  printf("\nValor da divisão: %d", divisao);
  printf("\nValor da multiplicação: %d\n", multiplicacao);

}
