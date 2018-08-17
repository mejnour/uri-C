// Bhaskara's Formula

#include <stdio.h>
#include <math.h>

void main() {
  float A, B, C, R1, R2, D;

  scanf("%f %f %f", &A, &B, &C);

  D = (B * B)-(4.0 * A * C);

  if ((D >= 0) && (A > 0)) {
    R1 = (-B + sqrt(D))/(2.0 * A);
    R2 = (-B - sqrt(D))/(2.0 * A);

    printf("R1 = %.5f\n", R1);
    printf("R2 = %.5f\n", R2);
    
  } else {
    printf("Impossivel calcular\n");
  }
}
