// Osterberechnung

#include <stdio.h>
#include <time.h>

int main()

{
  // Variablen

  int t, ts, tm_year, year, a, b, c, h1, h2, N, M, d, e, f, ostern, currentyear;
  t = time(NULL);
  ts = localtime(&t);
  printf("%d\n", currentyear);
  // Jahreseingabe

  printf("Enter year: ");
  scanf("%d", &year);
  printf("\n");

  // Gaussche Osterformel
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

  // März oder April

  if (ostern <= 31) {
    if (currentyear > year) {
      printf("Ostersonntag war am %d.März %d \n", ostern, year);
      printf("\n");
    } else {
      printf("Ostersonntag ist am %d.März %d \n", ostern, year);
      printf("\n");
    }
  } else {
    if (currentyear > year) {

      printf("Ostersonntag war am %d.April %d\n", ostern - 31, year);
      printf("\n");
    } else {
      printf("Ostersonntag ist am %d.April %d \n", ostern - 31, year);
      printf("\n");
    }
  }

  // Recursion

  main();
  return 0;
}
