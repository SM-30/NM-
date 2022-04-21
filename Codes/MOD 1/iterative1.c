//x*x*x+x-1,  v=1/(x*x+1)
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
double val(double x)
{
    double v = 2 * x - log10(x) - 7;
    return v;
}
double gval(double x)
{
    double v= (log10(x) + 7) / 2;
    return v;
}
int main()
{
    double a,b,e = 0.0000001;int it = 0;
     double x;
    for(int i=1;i<1e5;i++)
    {
        if(val(i)>0)
        {
            a=i-1;
            b=i;
            break;
        }
    }
    printf("A: %d\n", a);
    while(fabs(val(gval(a)))>=e)
    {
        a=gval(a);
        // printf("%.4lf\n",abs(val(b)));
        ++it;
        printf("Solution coverges in iteration: %d\n",it);
        printf("Root: %.4lf\n",a);
        printf("Value of function: %lf\n",val(a));
    }
    /*printf("Solution coverges in iteration: %d\n",it);
    printf("Root: %.4lf\n",a);
    printf("Value of function: %lf\n",val(a));*/
    // if(dval(a)==0)
    // {
    //     printf("Method Failed After %d Iterations \n",it);
    // }
    return 0;
}