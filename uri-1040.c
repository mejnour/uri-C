// Average 3

#include <stdio.h>

void main() {
  float n1, n2, n3, n4, n5, av;

  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  av = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1))/(1 + 2 + 3 + 4);

  printf("Media: %.1f\n", av);

  if (av > 7.0) {
    printf("Aluno aprovado.\n");
  } else if (av < 5.0) {
    printf("Aluno reprovado.\n");
  } else if (av < 7.0 && av >= 5.0) {
    printf("Aluno em exame.\n");
    scanf("%f", &n5);
    printf("Nota do exame: %.1f\n", n5);
    av = (av +  n5)/2;
    if (av >= 5.0) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", av);
  }
}
