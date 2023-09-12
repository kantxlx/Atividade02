#include <string.h>

main(){
    //Atividade numero 9

  float salarioAtual, porcentagem, porcentagemReajuste, NovoSalario;

  printf("Digite o salario atual: ");
  scanf("%f", &salarioAtual);

  printf("Digite a porcentagem do reajuste: ");
  scanf("%f", &porcentagem);

  porcentagemReajuste = porcentagem / 100;

  NovoSalario = (salarioAtual * porcentagemReajuste) + salarioAtual;

  printf("Seu novo salario com reajuste é: %.2f", NovoSalario);
}
