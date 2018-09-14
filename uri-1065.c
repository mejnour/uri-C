// Even Between five Numbers

#include <stdio.h>

void main() {
  int i, count;
  int numb[5];

  i = 0;
  count = 0;

  for (i; i <= 4; i++) {
    scanf("%d", &numb[i]);
    if (numb[i] % 2 == 0) {
      count += 1;
    } else {
      continue;
    }
  }

  printf("%d valores pares\n", count);
}
