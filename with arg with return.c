#include<stdio.h>
int sum(int i,int j,int h)
{
    int s;
    s=i+j+h;
    return s;
}
int main()
{
    int a,b,c,d;
printf("enter your values");
scanf("%d %d %d",&a,&b,&c);
d=sum(a,b,c);
printf("%d ",d);
}
