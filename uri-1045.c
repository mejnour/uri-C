// Triangle Types

#include <stdio.h>

void testa(float a, float b, float c) {
  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if ((a * a) == (b * b + c * c)) {
      printf("TRIANGULO RETANGULO\n");
    }
    if ((a * a) > (b * b + c * c)) {
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((a * a) < (b * b + c * c)) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c) {
      printf("TRIANGULO EQUILATERO\n");
    }
    if ((a == b && a != c)|| (a == c && a != b) || (b == c && b != a)) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
}

void main() {
  float a, b, c;

  scanf("%f %f %f", &a, &b, &c);

  if (a > b && a > c) {
    testa(a, b, c);
  } else if (b > a && b > c) {
    testa(b, a, c);
  } else if (c > a && c > b) {
    testa(c, a, b);
  } else {
    testa(a, b, c);
  }
}
