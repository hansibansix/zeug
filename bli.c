#include <stdio.h>
#include <time.h>

int main() {
  // Variablen
  time_t now;
  time(&now);
  struct tm *local = localtime(&now);
  int currentyear, year, a, b, c, h1, h2, N, M, d, e, f, ostern;
  currentyear = local->tm_year + 1900;
  // Jahreseingabe
  printf("Enter year: ");
  scanf("%d", &year);
  // Berechnung
  a = year % 4;
  b = year % 7;
  c = year % 19;
  h1 = year / 100;
  h2 = year / 400;
  N = 4 + h1 - h2;
  M = 14 + h1 - h2 - (8 * h1 + 13) / 25;
  d = (19 * c + M) % 30;
  e = (2 * a + 4 * b + 6 * d + N) % 7;
  f = (c + 11 * d + 22 * e) / 451;
  ostern = 22 + d + e - 7 * f;
  // Ausgabe
  printf("\n");
  // Ostern ist März
  if (ostern <= 31) {
    if (currentyear > year) {
      printf("Ostersonntag war am %d.M\x84rz\n", ostern);
      printf("\n");
    } else {
      printf("Ostersonntag ist am %d.M\x84rz\n", ostern);
      printf("\n");
    }
    // Ostern ist April
  } else {
    if (currentyear > year) {
      printf("Ostersonntag war am %d.April\n", ostern - 31);
      printf("\n");
    } else {
      printf("Ostersonntag ist am %d.April\n", ostern - 31);
      printf("\n");
    }
  }
  // Recursion
  main();
  return 0;
}
