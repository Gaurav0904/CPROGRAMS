#include <stdio.h>

int main ()
{
    float kmd ;

    printf("Enter the distance in km :\n") ;
    scanf("%f",&kmd); 
 
    printf("The distance in centimetres is: %f \n",kmd*1000);
    printf("The distance in feet is: %f \n",kmd*3280.84);
    printf("The distance in inches is: %f \n",kmd*39370.1);

}