#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float x[10], y[10], sum = 0.0, p = 0.0, u, temp ,f[10];
    int i, n, j, k = 0, m;
    printf("Enter the number of records: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter value of x%d: ", i);
        scanf("%f", &x[i]);
        printf("Enter value of f(x%d): ", i);
        scanf("%f", &y[i]);
    }
    printf("Enter x for finding f(x): ");
    scanf("%f", &p);
    for(i=0; i<n; i++)
    {
        temp = 1;
        k = i;
        for(j=0; j<n; j++)
        {
            if(k == j)
            continue;
            else
            temp = temp * ((p - x[j]) / (x[k] - x[j]));
        }
        f[i] = y[i] * temp;
    }
    for(i=0; i<n; i++)
    sum = sum + f[i];
    printf("\n\n f(%.2f) = %f", p, sum);
    return 0;
}