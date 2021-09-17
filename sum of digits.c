#include<stdio.h>
int main()
{

    int n,temp,r,sum=0;
    printf("Enter Digits: ");
    scanf("%d",&n);
    temp=n;
    for(;temp!=0;)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("Sum of Digit is: %d",sum);
    getch();
}
