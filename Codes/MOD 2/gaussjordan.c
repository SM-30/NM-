#include<stdio.h>
#include<conio.h>
int main()
{
    float a[20][20],t; 
    int i,j,k,n;
    printf("Enter the number of equations : ");
    scanf("%d",&n);
    printf("\nEnter the co-efficients of the equations :\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
	    printf("b[%d] = ",i + 1);
	    scanf("%f",&a[i][n]) ;
    }
    printf("\nThe Augmented matrix :\n");
    for(i=0; i<n; i++)
    { 
        for(j=0; j<n+1; j++)
        printf("\t %.2f ",a[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n+1; j++)
        {
            if(i!=j)
            {
                t=a[j][i]/a[i][i];
                for(k=0; k<n+1; k++)
                a[j][k]=a[j][k]-(a[i][k]*t);
            }
        }
    }
    printf("The Diagonal matrix : \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n+1; j++)
        printf("\t %.2f",a[i][j]);
        printf("\n");
    }
    printf("\nSolution is = ");
    for(i=0; i<n; i++)
    printf("\nx[%d] = %.2f",i+1,a[i][n]/a[i][i]);  
    return 0;
}