// Selection Test 1

#include <stdio.h>

void main() {
  int A, B, C, D;

  scanf("%d %d %d %d", &A, &B, &C, &D);

  if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C / 1 > 0) && (D / 1 > 0) && (A % 2 == 0)) {
    printf("Valores aceitos\n");
  } else {
    printf("Valores nao aceitos\n");
  }
}
