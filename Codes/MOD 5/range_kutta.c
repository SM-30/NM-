#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x,y) x + y*y
int main()
{
    double y0, x0, y1, n, h, f, k1, k2, k3, k4;
    printf("\nEnter the value of x0: ");
    scanf("%d", &x0);
    printf("Enter the value of y0: ");
    scanf("%d", &y0);
    printf("Enter the value of h: ");
    scanf("%lf", &h);
    printf("\nEnter the value of the last point: ");
    scanf("%lf", &n);
    for(; x0<n; x0+=h)
    {
        f = F(x0, y0);
        k1 = h * f;
        f = F(x0 + h/2, y0 + k1/2);
        k2 = h * f;
        f = F(x0 + h/2, y0 + k2/2);
        k3 = h * f;
        f = F(x0 + h/2, y0 + k2/2);
        k4 = h * f;
        y1 = y0 + (k1 + 2*k2 + 2*k3 + k4) / 6;
        printf("\n\nk1 = %.3lf", k1);
        printf("\nk2 = %.3lf", k2);
        printf("\nk3 = %.3lf", k3);
        printf("\nk4 = %.3lf", k4);
        printf("\n\n y(%.3lf) = %.3lf", x0+h, y1);
        y0 = y1;
    }
    return 0;
}