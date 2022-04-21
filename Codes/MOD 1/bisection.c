//pow(x, 3.0) - 4 * x - 9 x=-1,y=3
//x * log(x) - 1.2 x=1,y=4
//pow(x, 3.0) + x - 1
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
double val(double x)
{
    double v = pow(x,3) - 5*x + 3; 
    return v;
}
int main()
{
    double a,b,x0,e = 0.001;
    int it = 1,check = 1;
    label : printf("Enter the intitial values:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    if(val(a) * val(b) < 0)
    printf("Initial approximation correct\n");
    else
    {
        printf("Initial approximation not correct\n");
        goto label;
    }
    while(((b - a) / b) > e)
    {
        x0 = (a + b) / 2;
        if(val(x0) == 0)
        {
            printf("Solution coverges in iteration: %d\n",it);
            printf("Root: %lf\n",x0);
            printf("Value of function: %lf\n",val(x0));
            check = 0;
            break;
        }
        else if(val(a) * val(x0) < 0)
        b = x0;
        else
        a = x0;
        ++it;  
         printf("Root: %lf\n",x0);
            printf("Value of function: %lf\n",val(x0));
    }
    if(check)
    {
        printf("Solution coverges in iteration: %d\n",it);
        printf("Root: %lf\n",x0);
        printf("Value of function: %lf\n",val(x0));
    }
    return 0;
}