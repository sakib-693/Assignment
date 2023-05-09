#include <stdio.h>
int main() 
{
int a,b,c;    
printf("enter first number");
scanf("%d,&a");
printf("enter second number");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("swipped numbers are : %d %d",a,b);
    return 0;
}
