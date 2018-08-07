// Age in Days

#include <stdio.h>

void main() {
  int tempo, ano, meses, dias;

  scanf("%d", &tempo);

  ano = tempo / 365;
  printf("%d ano(s)\n", ano);
  tempo = tempo - (ano * 365);

  meses = tempo / 30;
  printf("%d mes(s)\n", meses);
  tempo = tempo - (meses * 30);

  dias = tempo;
  printf("%d dia(s)\n", dias);
}
