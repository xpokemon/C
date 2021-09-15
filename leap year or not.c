#include<stdio.h>
int main()
{


    int y;
    while(1){
    printf("ENter Year: ");
    scanf("%d",&y);
    if(y%400==0 || y%4==0 && y%100!=0)
    {

        printf("Leap Year\n");

    }
    else
        printf("Not Leap Year\n");
    }
    getch();





}
