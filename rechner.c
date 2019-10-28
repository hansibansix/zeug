#include <stdio.h>
int main() {
  float a, b, ergebnis;
  char operand;
  printf("Bitte Rechnung eingeben: \n");
  scanf("%f", &a);
  scanf("%c", &operand);
  scanf("%f", &b);

  switch (operand) {
  case '+':
    ergebnis = a + b;
    break;
  case '-':
    ergebnis = a - b;
    break;
  case '*':
    ergebnis = a * b;
    break;
  case '/':
    ergebnis = a / b;
    break;
  default:
    printf("Error\n");
    break;
  }

  printf("%.2f %c %.2f = %.2f \n", a, operand, b, ergebnis);
  printf("\n");

  main();
  return 0;
}
