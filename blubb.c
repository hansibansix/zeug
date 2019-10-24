#include <stdio.h>
#include <math.h>
int main()
{
 int x, a, b, c, d;
 int y=6;
 printf("Enter x: ");
 scanf("%d", &x);
 a= x*x*x*x*x;
 b= x*x*x*x;
 c= x*x*x;
 d= x*x;
 printf("3x^5+2x^4-5x^3+x^2+7x-6=%d",3*a+2*b-5*c+d+7*x-6);
}