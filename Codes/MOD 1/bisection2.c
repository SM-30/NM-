#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
double val(double x)
{
    double v = pow(x,3.0) - 4*x - 9;
    return v;
}
int main()
{
    double a,b,x0,e = 0.001;
    int it = 1,check = 1;
    for(int i=-1e5; i<1e5; i++)
    {
        if(val(i) > 0)
        {
            a = i - 1;
            b = i;
            break;
        }
    }
    printf("a: %lf\nb: %lf\n",a,b);
    while(((b - a) / b) > e)
    {
        x0 = (a + b) / 2;
        if(val(a) * val(x0) < 0)
        b = x0;
        else
        a = x0;
        ++it;  
        printf("Solution coverges in iteration: %d\n",it);
        printf("Root: %lf\n",x0);
        printf("Value of function: %lf\n",val(x0));
    }
    return 0;
}