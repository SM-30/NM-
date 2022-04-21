//(log10(x) + 7) / 2    x*x*x + x - 1
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
float g(float x)
{
    return (x * log10(x) - 1.2);
}
int main()
{
    int itr = 0;
    float x1,x2,x0, err;
    printf("enter the value of x1, allowed error\n");
    scanf("%f%f", &x1, &err);
    do
    {
        x2 = g(x1);
        x0 = x1;
        x1= x2;
        itr++;
    } while (fabs((x2 - x0) * err));
    printf("\n solution converges in interation = %d", itr);
    printf("\n Root =%f", x2);
    return 0;
}