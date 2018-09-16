// Even, Odd, Positive and Negative

#include <stdio.h>

void main() {
  int i, par, impar, pos, neg;
  int numb[5];

  i = 0;
  par = 0;
  impar = 0;
  pos = 0;
  neg = 0;

  for (i; i <= 4; i++) {
    scanf("%d", &numb[i]);

    if (numb[i] > 0) {
      pos += 1;
    } else if (numb[i] < 0) {
      neg += 1;
    }

    if (numb[i] % 2 == 0) {
      par += 1;
    } else {
      impar += 1;
    }
  }

  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", impar);
  printf("%d valor(es) positivo(s)\n", pos);
  printf("%d valor(es) negativo(s)\n", neg);
}
