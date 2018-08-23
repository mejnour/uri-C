// Salary Increase

#include <stdio.h>

void main() {
  float salary;

  scanf("%f", &salary);

  if (salary > 0.0 && salary <= 400.0) {
    printf("Novo salario: %.2f\n", (salary + (salary * 0.15)));
    printf("Reajuste ganho: %.2f\n", ((salary * 0.15)));
    printf("Em percentual: 15 \%\n");
  } else if (salary > 400.0 && salary <= 800.0) {
    printf("Novo salario: %.2f\n", (salary + (salary * 0.12)));
    printf("Reajuste ganho: %.2f\n", ((salary * 0.12)));
    printf("Em percentual: 12 \%\n");
  } else if (salary > 800.0 && salary <= 1200.0) {
    printf("Novo salario: %.2f\n", (salary + (salary * 0.1)));
    printf("Reajuste ganho: %.2f\n", ((salary * 0.1)));
    printf("Em percentual: 10 \%\n");
  } else if (salary > 1200.0 && salary <= 2000.0) {
    printf("Novo salario: %.2f\n", (salary + (salary * 0.07)));
    printf("Reajuste ganho: %.2f\n", ((salary * 0.07)));
    printf("Em percentual: 7 \%\n");
  } else {
    printf("Novo salario: %.2f\n", (salary + (salary * 0.04)));
    printf("Reajuste ganho: %.2f\n", ((salary * 0.04)));
    printf("Em percentual: 4 \%\n");
  }
}
