// Multiples

#include <stdio.h>

void main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if (b > a && b % a == 0) {
    printf("Sao Multiplos\n");
  } else if (a > b && a % b == 0) {
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
}
