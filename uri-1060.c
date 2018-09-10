// Positive Numbers

#include <stdio.h>

void main() {
  int i, count;
  float numb[6];

  i = 0;
  count = 0;

  for (i; i <= 5; i++) {
    scanf("%f", &numb[i]);

    if (numb[i] < 0) {
      continue;
    } else {
      count += 1;
    }
  }

  printf("%d valores positivos\n", count);
}
