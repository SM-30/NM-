//WAP to integrate 1 to 2 f(x) = 1/(1 + x^2)dx using Trapezoidal rule with 6 intervals
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,h,x,y,y0,yn,xn,s,r;
    int i,n;
    float f(float);
    printf("\nEnter the lower limit: ");
    scanf("%f", &a);
    printf("enter the Upper limit: ");
    scanf("%f", &b);
    printf("Enter the interval: ");
    scanf("%d", &n);
    h = (b-a) / n;
    y0 =f(a);
    yn = f(b);
    x = a + h;
    s = 0;
    for(i=1; i<=(n-1); i++)
    {
        y =f(x);
        s = s + y;
        x = x + h;
    }
    r = (h/2) * ((y0 + yn) + (2 * s));
    printf("\nThe result is: %f",r);
    return 0;
}
float f(float x)
{
    return (1/(1+ x*x));
}