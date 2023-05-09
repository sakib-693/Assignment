// Online C++ compiler to run C++ program online
#include<stdio.h>
int main() 
{
    int s1,s2,s3,s4,s5,sum=0;
    float per,a;
    printf("enter the mark of s1");
    scanf("%d",&s1);
    printf("enter the mark of s2");
    scanf("%d",&s2);
    printf("enter the mark of s3");
    scanf("%d",&s3);
    printf("enter the mark of s4");
    scanf("%d",&s4);
    printf("enter the mark of s5");
    scanf("%d",&s5);
    sum=(s1+s2);
    sum+=s3;
    sum+=s4;
    sum+=s5;
    printf("the sum of 5 subject is :%d",sum);
    a=(sum*100);
    per=a/500;
    
    printf("percentage of 5 subject is :%f",per);
  return 0;
    
}
