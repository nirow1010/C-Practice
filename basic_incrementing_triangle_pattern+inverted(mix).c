#include <stdio.h>
void stared(int a, int b);

int main(void) {
  int r, c;
  printf("Enter the number of rows\n");       //asking user for number of rows
  scanf("%d",&r);        //saving number of rows in a variable r
  printf("Enter the number of columns\n");       //asking user for number of columns
  scanf("%d",&c);         //saving number of columns in a variable c
  stared(r, c);
}

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