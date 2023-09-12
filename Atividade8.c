#include <string.h>

main(){
    //Atividade numero 8

  int dias, meses, anos, TotalDias;

  printf("Digite a idade em anos: ");
  scanf("%d", &anos);
    
  printf("Digite a idade em meses: ");
  scanf("%d", &meses);
  
  printf("Digite a idade em dias: ");
  scanf("%d", &dias);
  
  TotalDias = (anos * 365) + (meses * 30) + dias;

  printf("Total de dias vividos até hoje: %d", TotalDias);
}
