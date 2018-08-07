// Time Conversion

#include <stdio.h>

void main() {
  int temp, hr, min, seg;

  scanf("%d", &temp);

  hr = temp / 3600;
  temp = temp - hr * 3600;

  min = temp / 60;
  temp = temp - min * 60;

  seg = temp;

  printf("%d:%d:%d\n", hr, min, seg);
}
