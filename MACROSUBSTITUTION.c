#include <stdio.h>
#include <conio.h>
#define square(x) x*x

void main()
{

  int n ;

  printf("Enter a number n : ");
  scanf("%d",&n);
  printf("Square of %d is %d." ,n,square(n) );


  getch();
}