// Sum of Consecutive Odd Numbers I

#include <stdio.h>

void soma(int a, int b) {
  int cont = 0;

  a++;

  for(a; a < b; a++) {
    if(a % 2 == 0) {
      continue;
    } else {
      cont += a;
    }
  }

  printf("%d\n", cont);
}

void main() {
  int a, b;

  scanf("%d %d", &a, &b);

  if(b > a) {
    soma(a, b);
  } else if (a > b) {
    soma(b, a);
  } else {
    soma(a, a);
  }
}
