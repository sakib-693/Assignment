#include<stdio.h>
int main()
{
int n,i,fact=1;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>0;i--){
    fact=fact*i;
}
printf("factorial of a number is %d",fact);
return 0;   
}
