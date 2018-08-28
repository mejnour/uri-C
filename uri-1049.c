// Animal

#include <stdio.h>
#include <string.h>

void main() {
  char words[3][15];
  char temp[15];

  int i = 0;

  for (i; i < 3; i++) {
    scanf("%s", &temp);
    strcpy(words[i], temp);
  }

  if (!strcmp(words[0], "vertebrado")) {
    // printf("1\n");
    if (!strcmp(words[1], "ave")) {
      if (!strcmp(words[2], "carnivoro")) {
        printf("aguia\n");
      } else if (!strcmp(words[2], "onivoro")) {
        printf("pomba\n");
      }
    } else if (!strcmp(words[1], "mamifero")) {
      if (!strcmp(words[2], "onivoro")) {
        printf("homem\n");
      } else if (!strcmp(words[2], "herbivoro")) {
        printf("vaca\n");
      }
    }
  } else if (!strcmp(words[0], "invertebrado")) {
    // printf("2\n");
    if (!strcmp(words[1], "inseto")) {
      if (!strcmp(words[2], "hematofago")) {
        printf("pulga\n");
      } else if (!strcmp(words[2], "herbivoro")) {
        printf("lagarta\n");
      }
    } else if (!strcmp(words[1], "anelideo")) {
      if (!strcmp(words[2], "hematofago")) {
        printf("sanguessuga\n");
      } else if (!strcmp(words[2], "onivoro")) {
        printf("minhoca\n");
      }
    }
  }
}
