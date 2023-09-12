#include <string.h>

main(){
    //Atividade numero 5

  float valor, CotacaoDolar, ValorConvertido;

  printf("Digite o valor que você que converter em Dolar: ");
  scanf("%f", &valor);

  printf("\nDIgite o valor do Dolar no momento: ");
  scanf("%f", &CotacaoDolar);
  
  ValorConvertido = valor / CotacaoDolar;

  printf("\nO seu valor em Dolar é: %f", ValorConvertido);
}
