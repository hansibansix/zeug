#include <stdio.h>

int main() {
  int year, A, B, C, D;

  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");
  A = year % 4;
  B = year % 400;
  C = year % 100;

  if (A == 0 || A + B + C == 0 || B + C == 0) {
    printf("Schaltjahr \n");
    printf("\n");
  } else {
    printf("kein Schaltjahr \n");
    printf("\n");
  }
  main();
  return 0;
}
