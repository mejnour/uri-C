// Banknotes and Coins

#include <stdio.h>
#include <math.h>

#define DOIS 2.0

void main() {
  int inteiro;
  double valor, frac;

  scanf("%lf", &valor);

  inteiro = trunc(valor);
  frac = valor - inteiro;

  printf("NOTAS:\n");

  inteiro = valor / 100;
  printf("%d nota(s) de R$ 100.00\n", inteiro);
  valor = valor - (inteiro * 100);

  inteiro = valor / 50;
  printf("%d nota(s) de R$ 50.00\n", inteiro);
  valor = valor - (inteiro * 50);

  inteiro = valor / 20;
  printf("%d nota(s) de R$ 20.00\n", inteiro);
  valor = valor - (inteiro * 20);

  inteiro = valor / 10;
  printf("%d nota(s) de R$ 10.00\n", inteiro);
  valor = valor - (inteiro * 10);

  inteiro = valor / 5;
  printf("%d nota(s) de R$ 5.00\n", inteiro);
  valor = valor - (inteiro * 5);

  inteiro = valor / 2;
  printf("%d nota(s) de R$ 2.00\n", inteiro);
  valor = valor - (inteiro * 2);

  printf("MOEDAS:\n");

  valor = valor * 100;

  inteiro = valor / 100;
  printf("%d moeda(s) de R$ 1.00\n", inteiro);
  valor = valor - (inteiro * 100);

  inteiro = valor / 50;
  printf("%d moeda(s) de R$ 0.50\n", inteiro);
  valor = valor - (inteiro * 50);

  inteiro = valor / 25;
  printf("%d moeda(s) de R$ 0.25\n", inteiro);
  valor = valor - (inteiro * 25);

  inteiro = valor / 10;
  printf("%d moeda(s) de R$ 0.10\n", inteiro);
  valor = valor - (inteiro * 10);

  inteiro = valor / 5;
  printf("%d moeda(s) de R$ 0.05\n", inteiro);
  valor = valor - (inteiro * 5);

  inteiro = valor / 1;
  printf("%d moeda(s) de R$ 0.01\n", inteiro);
}
