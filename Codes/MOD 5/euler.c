#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double func(double, double);

int main() {
    double x, y, h, n, xf;
    int i;
    
    printf("\n f(x, y) = 1 + x * y\n");
    printf("\n Enter initial x: ");
    scanf("%lf", &x);
    printf("\n Enter initial f(x): ");
    scanf("%lf", &y);
    printf("\n Enter h: ");
    scanf("%lf", &h);
    printf("\n Enter value of x for which y is to be found: ");
    scanf("%lf", &xf);
    n = (xf-x)/h;
    for(i=1; i<=(int)n; i++) {
    	y += (h*func(x, y));
    	x += h;
	}
	printf("\n\n Result is: %lf", y);
}

double func(double x, double y) 
{
	return 1 + x* y;
}