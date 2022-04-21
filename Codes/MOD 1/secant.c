#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
double val(double x)
{
    double v = pow(x, 3.0) - 4 * x - 9;
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
    while(fabs(val(b))>=e)
    {
        x=b-((b-a)/(val(b)-val(a)))*val(b);
        a=b;
        b=x;
        ++it;
        printf("Solution coverges in iteration: %d\n",it);
        printf("Root: %.4lf\n",b);
        printf("Value of function: %lf\n",val(x));
    }
    return 0;
}