// Salary

#include <stdio.h>

void main() {
  int num, hours;
  float rate;

  scanf("%d %d %f", &num, &hours, &rate);

  printf("NUMBER = %d\n", num);
  printf("SALARY = U$ %.2f\n", (hours * rate));
}
