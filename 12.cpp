#include<stdio.h>
int main()
{
int n,i,sum=0;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>0;i--){
    sum=sum+i;
}
 printf("sum is %d",sum);   
return 0;   
}
