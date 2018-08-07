// Fuel Spent

#include <stdio.h>

void main() {
  int tempo, avSpeed;

  scanf("%d %d", &tempo, &avSpeed);

  printf("%.3f\n", ((tempo * avSpeed) / 12.0));
}
