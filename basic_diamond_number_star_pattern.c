void susja(int a) {
  for (int i = 0; i < a; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%d", i+1);
      if (j < i) {
        printf("*");
      }
    } 
    printf("\n");
  }
  for (int x = 0; x < (a - 1); x++) {
    for (int y = 0; y <= a-x-2; y++) {
      printf("%d", a - x - 1);
      if (y < a-x-2) {
        printf("*");
      }
    }
    printf("\n");
  }
}