// Salary with Bonus

#include <stdio.h>

void main() {
  char name[20];
  double sal, val;

  scanf("%[^\n]c", &name);
  scanf("%lf %lf", &sal, &val);

  printf("TOTAL = %.2lf\n", (sal + (val * 0.15)));
}
