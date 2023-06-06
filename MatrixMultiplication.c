#include <stdio.h>

void main()
{
    int A[3][3], B[3][3], M[3][3], i, k, j ;

    //INPUT A AND B 

    printf("Enter A:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter B:\n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    //Multiply A and B 

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            M[i][j]=0 ;

            for(k=0;k<3;k++)
            {
                M[i][j] = M[i][j] + (A[i][k]*B[k][j]) ;
            }
        }
    }
    // Print the Multiplication Matrix

    printf("Multiplication of A & B is:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }


}
