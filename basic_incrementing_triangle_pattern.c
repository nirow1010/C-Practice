#include <stdio.h>

void cramid(int b) {
  int sum = 0;

  for (int i = 0; i < b; i++) {
    sum += i;
    int mult = 1;
    
    for (int x = b; x >= i; x--) {
      printf("  ");
    }
    for (int j = 0; j <= i; j++) {
      mult *= sum + j + 1;
      printf("%d", sum + j + 1);
      
      if (j != i) {
        printf("*");
      } 
    }  
    printf("\n");
  }
}
