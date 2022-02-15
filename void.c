#include<stdio.h>
void sum();
void sub();
void main()
{
    sum();
    sub();
}
void sum()
{
    int a,b;
    printf("\nenter the two numbers");
    scanf("%d %d",&a,&b);
    printf("the sum is %d",a+b);
}
void sub()
{
    int a,b;
    printf("\nenter the numbers");
    scanf("%d %d",&a,&b);
    printf("the sub is %d",a-b);
}
