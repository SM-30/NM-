#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
float fact(int);
int main()
{
    float x[10], y[10][10], sum, p, u, temp;
    int i, n, j, k = 0, f, m;
    printf("Enter the number of records: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter value of x%d: ", i);
        scanf("%f", &x[i]);
        printf("Enter value of f(x%d): ", i);
        scanf("%f", &y[k][i]);
    }
    printf("Enter x for finding f(x): ");
    scanf("%d", &p);
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        y[i][j] = y[i-1][j+1] - y[i - 1][j];
    }
    printf("\n--------------------------------------\n");
    printf("\n x(i)\t y(i)\t y1(i)\t y2(i)\t y3(i)\t y4(i)");
    printf("\n------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("\n %.3f", x[i]);
        for(j=0; j<n-i; j++)
        {
            printf("   ");
            printf(" %.3f", y[j][i]);
        }
    }
    i = 0;
    do 
    {
        if(x[i] < p && p< x[i + 1])
        k = 1;
        else
        i++;
    }while(k != 1);
    f = i;
    u = (p - x[f]) / (x[f + 1] - x[f]);
    printf("\n\n u = %.3f", u);
    n = n - i + 1;
    sum = 0;
    for(i=0; i<n-1; i++)
    {
        temp = 1;
        for(j=0; j<i; j++)
        temp = temp * (u - j);
        m = fact(i);
        sum = sum + temp * (y[i][f] / m);
    }
    //printf("\n\n f(%f) = %f", p, sum);
    //printf("P= %f and SUM = %f", p, sum);
    cout<<"\n\n f("<<p<<") = "<<sum;
    return 0;
}
float fact(int a)
{
    float fac = 1;
    if(a == 0)
    return 1;
    else
    fac = a * fact(a - 1);
    return fac;
}