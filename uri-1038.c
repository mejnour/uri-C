// Snack

#include <stdio.h>

void main() {
  int x, y;
  float price;

  scanf("%d %d", &x, &y);

  switch (x) {
    case 1:
      price = 4.00;
      break;
    case 2:
      price = 4.50;
      break;
    case 3:
      price = 5.00;
      break;
    case 4:
      price = 2.00;
      break;
    case 5:
      price = 1.50;
      break;
  }

  printf("Total: R$ %.2f\n", (price * y));
}
