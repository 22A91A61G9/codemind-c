#include<stdio.h>
int main()
{
    int a,i,b,c,d=0,e=1;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        b=i%10;
        d=d+b;
        e=e*b;
    }
    c=e-d;
    {
        printf("%d",c);
    }
}