#include <stdio.h>
void cramid(int b);
void susja(int a);

int main(void) {
  int c;
  printf("Enter the number of columns\n");       //asking user for number of columns
  scanf("%d",&c);         //saving number of columns in a variable 
  susja(c);
}
