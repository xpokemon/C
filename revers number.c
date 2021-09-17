#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{

 int n,r;
 int temp;
 sf("%d",&n);
 temp=n;

 while(temp!=0)
 {
     r=temp%10;
     temp=temp/10;
      pf("%d",r);
 }


}
