#include <stdio.h>
#include <conio.h>

void printArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void Bubblesort(int *A, int n)
{
    int temp ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int j = 0 ; j < n-1-i ; j++)
        {
            if(A[j]>A[j+1])
            {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
}

void main()
{
    int A[]={12,54,65,7,23,9};
    int n=6;

    printArray(A,n); //Print array before sorting. 
    Bubblesort(A,n); //Sort the array.
    printArray(A,n); //Print array after sorting.

getch();
}