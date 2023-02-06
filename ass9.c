#include <stdio.h>

int main()
{
    float TSP, TP, SP, TCP, CP ;

    printf("Total profit on all items "); 
    scanf("%f",&TP);

    printf("Enter the total selling price of 15 items: \n");
    scanf("%f", &TSP) ;


    TCP = TSP - TP ;

    CP = TCP/15 ;

    printf("The cost per item is \n%f",CP);

    return 0 ;
}