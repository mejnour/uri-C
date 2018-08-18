// Interval

#include <stdio.h>

const char * determina(float input);

void main() {
  float inp;

  scanf("%f", &inp);

  printf("%s\n", determina(inp));
}

const char * determina(float input) {
  if ((input < 0.0) || (input > 100.0)) {
    return "Fora de intervalo";
  } else {
    if ((input >= 0.0) && (input <= 25.0)) {
      return "Intervalo [0,25]";
    } else if ((input > 25.0) && (input <= 50.0)) {
      return "Intervalo (25,50]";
    } else if ((input > 50.0) && (input <= 75.0)) {
      return "Intervalo (50,75]";
    } else if ((input > 75.0) && (input <= 100.0)) {
      return "Intervalo (75,100]";
    }
  }
}
