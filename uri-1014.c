// Consumption

#include <stdio.h>

void main() {
  int km;
  float gas;

  scanf("%d %f", &km, &gas);

  printf("%.3f km/l\n", (km / gas));
}
