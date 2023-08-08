#include <stdio.h>
#include <stdlib.h>
int main(void) {
  // Entrada de dados
  // Notas UVV

  float nota1, nota2, media;
  printf("Digite sua nota do primeiro bimestre:");
  scanf("%f", &nota1);
  printf("Digite sua nota do segundo bimestre:");
  scanf("%f", &nota2);

  // Processamento
  media = (nota1 + nota2) / 2;
  if (media > 10) {
    printf("[ERRO]DIGITE NOTAS VALIDAS!");
    return 0;
  }
  if (nota1 < 0 || nota2 < 0) {
    printf("[ERRO]DIGITE NOTAS VALIDAS!");
    return 0;
  }

  printf("Sua média é %f\n", media);

  // Saida

  if (media < 3) {

    printf("Status : Reprovado");

  } else if (media > 7) {
    printf("Status : Aprovado");
  } else {
    printf(" Status : Prova final ");
  }

  return 0;
}
