// Simple Calculate

#include <stdio.h>

void main() {
  int code, units;
  float price, total;

  total = 0;

  for(int i = 0; i < 2; i++) {
    scanf("%d %d %f", &code, &units, &price);
    total = total + (units * price);
  }

  printf("VALOR A PAGAR: R$ %.2f\n", total);
}
