#include<stdio.h>
int main()
{
    int n,m,k,i,s;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=m;i++)
    {
        s=n*i;
        printf("%d x %d = %d
",n,i,s);
    }
}