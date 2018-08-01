// Sphere

#include <stdio.h>

#define PI 3.14159

void main() {
  double R;

  scanf("%lf", &R);

  printf("VOLUME = %.3lf\n", (PI * R * R * R * (4.0/3.0)));
}
