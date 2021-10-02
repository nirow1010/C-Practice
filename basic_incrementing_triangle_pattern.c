#include <stdio.h>

void cramid(int b) {
  int sum = 0;
  for (int i = 1; i <= b; i++) {
    sum += i-1;
    for (int j = 1; j <= i; j++) {
      printf("%d", sum + j);
      if (j != i) {
        printf("*");
      }
    }
    
    printf("\n");
  }
}
