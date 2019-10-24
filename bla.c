
#include <stdio.h>
#include <math.h>
int main()
{   
    int r;
    float x;
    float a= 4.0f/3.0f;
    
        printf("Enter radius of sphere: ");
        scanf("%d", &r);
        r= r*r*r;
        printf("4/3*pi*r^3= %f",a*M_PI*r);
	

}