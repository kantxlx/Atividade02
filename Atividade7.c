#include <string.h>

main(){
    //Atividade numero 7

  double raio, PI = 3.1415, areaCirculo;

  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);

  areaCirculo = PI *(raio * raio);
  //areaCirculo = PI * (pow(raio, 2));

  printf("O valor da area do circulo é: %.3lf", areaCirculo);
}
