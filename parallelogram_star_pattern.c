#include <stdio.h>

void stared(int a, int b) {
  for (int i = 0; i < b; i++) {
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    for (int x = 0; x < a; x++) {
      printf("*");
    }
    printf("\n");
  }
}