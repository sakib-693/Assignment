#include<stdio.h>
int main()
{
int n;
printf("enter the percentage");
scanf("%d",&n);
if ((n<=100)&(n>90)){
printf("your grade is A");
}
else if ((n<=90)&(n>80)){
printf("your grade is B");
}
else if ((n<=70)&(n>60)){
printf("your grade is C");
}
else{
printf("your grade is D");
}
return 0;
}
