// Six Odd Numbers

#include <stdio.h>

void main() {
  int de, ate;

  scanf("%d", &de);

  ate = 0;

  while (ate < 6) {
    if (de % 2 == 0) {
      de++;
      continue;
    } else {
      printf("%d\n", de);
      ate++;
    }
    de++;
  }
}
