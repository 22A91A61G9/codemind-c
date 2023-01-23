#include<stdio.h>
int main()
{
    float n,m,k;
    scanf("%f%f%f",&n,&m,&k);
    float s=n/m;
    if(s<=k)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
}