// Game Time

#include <stdio.h>

void main() {
  int a, b, tempo;

  scanf("%d %d", &a, &b);

  if (b < a) {
    printf("O JOGO DUROU %d HORA(S)\n", (24 + (b - a)));
  } else if (b > a) {
    printf("O JOGO DUROU %d HORA(S)\n", (b - a));
  } else {
    printf("O JOGO DUROU 24 HORA(S)\n");
  }
}
