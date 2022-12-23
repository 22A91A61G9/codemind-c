#include<stdio.h>
int main()
{
    int a,b=0,i,c=1,j,d,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        //printd("%d",b);
        d=b+c;
        b=c;
        c=d;
        if(d==a)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}