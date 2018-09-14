// Positives and Average

#include <stdio.h>

void main() {
  int i, count;
  float numb[6], count2;

  i = 0;
  count = 0;
  count2 = 0;

  for (i; i <= 5; i++) {
    scanf("%f", &numb[i]);
    if (numb[i] >= 0) {
      count += 1;
      count2 += numb[i];
    } else {
      continue;
    }
  }

  printf("%d valores positivos\n", count);
  printf("%.1f\n", (count2 / count));
}
