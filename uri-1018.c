// Banknotes

#include <stdio.h>

void main() {
  int valor, qtde;

  scanf("%d", &valor);

  qtde = valor / 100;
  printf("%d nota(s) de R$ 100,00\n", qtde);
  valor = valor - (qtde * 100);

  qtde = valor / 50;
  printf("%d nota(s) de R$ 50,00\n", qtde);
  valor = valor - (qtde * 50);

  qtde = valor / 20;
  printf("%d nota(s) de R$ 20,00\n", qtde);
  valor = valor - (qtde * 20);

  qtde = valor / 10;
  printf("%d nota(s) de R$ 10,00\n", qtde);
  valor = valor - (qtde * 10);

  qtde = valor / 5;
  printf("%d nota(s) de R$ 5,00\n", qtde);
  valor = valor - (qtde * 5);

  qtde = valor / 2;
  printf("%d nota(s) de R$ 2,00\n", qtde);
  valor = valor - (qtde * 2);

  qtde = valor / 1;
  printf("%d nota(s) de R$ 1,00\n", qtde);
}
