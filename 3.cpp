#include<stdio.h>
int main()
{
int r;
float area,circumference;
printf("enter the radius of circle");
scanf("%d",&r);
area=((3.14)*r*r);
circumference=(2*(3.14)*r);
printf("area of circle is : %f/n",area);
printf("circumference of circle is :%d",circumference);
return 0;
}
