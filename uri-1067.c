// Odd Numbers

#include <stdio.h>

void main() {
  int ate, i;
  i = 1;

  scanf("%d", &ate);

  for (i; i <= ate; i++) {
    if (i % 2 == 0) {
      continue;
    } else {
      printf("%d\n", i);
    }
  }
}
