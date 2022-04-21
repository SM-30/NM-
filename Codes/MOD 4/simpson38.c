#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x[10], y[10], sum = 0, h, temp;
    int i, n, j, k = 0, l = 0;
    printf("\nHow many record will you enter: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter the value of x%d: ", i);
        scanf("%f", &x[i]);
        printf("\nEnter the value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }
    h = x[1] - x[0];
    n = n - 1;
    sum += y[0];
    for(i=0; i<n; i++)
    {
        if(k == 0 || l == 0)
        {
            sum += 3*y[i];
            if(k == 1)
            {
                l = 1;
            }
            k = 1;
        }
        else
        {
            sum += 2 * y[i];
            k = 0;
            l = 0;
        }
    }
    sum += y[i];
    sum *= (3 * h / 8);
    printf("\n I = %f", sum);
    return 0;
}