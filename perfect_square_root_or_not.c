#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,num;
    scanf("%d",&num);
    i=(int)sqrt(num);
    if(num==i*i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}