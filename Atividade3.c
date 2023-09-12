#include <string.h>

main(){
    //atividade numero 3

  float comprimento, largura, area;

  printf("Digite o comprimeto da sala: ");
  scanf("%f", &comprimento);
  getchar();

  printf("\nDigite agora a largura: ");
  scanf("%f", &largura);

  area = largura * comprimento;

  printf("\nA area da sala é: %.2f", area);
}
