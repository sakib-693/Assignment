#include<stdio.h>
int main()
{
int n,i,even=0,odd=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i=n;i++){
 if(n%2==0){
     even = even+i;}
     printf("sum of even numbers is %d",even);
 
 else{
     odd =odd+ i;}
     printf("sum of odd numbers is %d",odd);
 
}
return 0;   
}
