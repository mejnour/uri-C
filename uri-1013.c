// The Greatest

#include <stdio.h>
#include <stdlib.h>

int maiorAB(int A, int B) {
  int maior;

  maior = (A + B + abs(A - B))/2;

  return maior;
}

void main() {
  int A, B, C;

  scanf("%d %d %d", &A, &B, &C);

  printf("%d eh o maior\n", maiorAB(maiorAB(A, B), C));
}
