#include <stdio.h>
#include <conio.h>
void swap(int *x,int *y);

void main()
{
    int a ,b ;

    printf("Enter two numbers a and b :\n");
    scanf("%d%d",&a,&b);

    swap(&a,&b);

    getch();

}

void swap(int *x,int *y)
{
    int temp ;
    temp = *x ;
    *x = *y ;
    *y = temp ;
    printf("A is %d ,B is %d ",*x,*y);
}