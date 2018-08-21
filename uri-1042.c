// Simple Sort

#include <stdio.h>
#include <string.h>

void main() {
  int abc[3], cba[3], aux, i, count;

  for (i = 0; i <= 2; i++) {
    scanf("%d", &abc[i]);
  }

  memcpy(cba, abc, sizeof(abc));

  i = 0;
  count = 0;
  while (count != 2){
    if (i == 2) {
      if (count == 2) {
        continue;
      }
      i = 0;
      count = 0;
    } else {
      if (abc[i] > abc[i + 1]) {
        aux = abc[i];
        abc[i] = abc[i + 1];
        abc[i + 1] = aux;
        i++;
      } else {
        i++;
        count++;
      }
    }
  }

  for (i = 0; i <= 2; i++) {
    printf("%d\n", abc[i]);
  }

  printf("\n");

  for (i = 0; i <= 2; i++) {
    printf("%d\n", cba[i]);
  }
}
