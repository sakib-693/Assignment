#include <stdio.h>
int main()
{
int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter third number");
scanf("%d",&c);
if((a>b)&(a>c)){
printf("a is greater");
}
else if((b>c)&(b>a)){
printf("b is greater");
}
else {
printf("c is greater");
}
    return 0;
}
