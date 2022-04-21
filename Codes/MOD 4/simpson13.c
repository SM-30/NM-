#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,h,x,y,y0,yn,xn,s0,se,r;
    int i,n;
    float f(float);
    printf("\nEnter the lower limit: ");
    scanf("%f", &a);
    printf("enter the Upper limit: ");
    scanf("%f", &b);
    printf("Enter the interval: ");
    scanf("%d", &n);
    h = (b - a) / n;
    y0 = f(a);
    yn = f(b);
    x = a + h;
    s0 = 0;
    for(i=1; i<=(n-1); i+=2)
    {
        y = f(x);
        s0 += y;
        x += 2 * h;
    }
    se = 0;
    x = a + (2 * h);
    for(i=2; i<=(n-2); i+=2)
    {
        y = f(x);
        se += y;
        x += 2 * h;
    }
    r = (h/3) * (y0 +yn + (4*s0) + (2*se));
    printf("\nThe result is: %f", r);
    return 0;
}
float f(float x)
{
    return (x/(1+x));
}