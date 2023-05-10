#include<stdio.h>
int main()
{
int a,b,n;
printf("enter first nuber");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter the case number");
scanf("%d",&n);
switch(n){
    case 1 : printf("the sum of two number is %d",a+b);
             break;
    case 2 : printf("the difference of two number is %d",a-b);
             break;
    default :printf("enter valid case");
return 0;    
}
}
