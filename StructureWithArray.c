#include <stdio.h>
#include <conio.h>

struct student 
{
    int physics , chemistry , maths ;

};

void main()
{
    struct student marks[3] ;

    for(int i=0;i<3;i++)
    {
    printf("Enter Physics marks of student %d: ", i+1);
    scanf("%d",&marks[i].physics);

    printf("Enter Chemistry marks of student %d: ", i+1);
    scanf("%d",&marks[i].chemistry);

    printf("Enter Mathematics marks of student %d: ", i+1);
    scanf("%d",&marks[i].maths);

    }

    for(int i=0;i<3;i++)
    {
    
    printf("Physics marks of student %d are :%d \n", i+1,marks[i].physics);
    printf("Chemistry marks of student %d are :%d \n", i+1,marks[i].chemistry);
    printf("Mathematics marks of student %d are :%d \n", i+1,marks[i].maths);
    }

getch();
}