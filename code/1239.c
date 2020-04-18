#include <stdio.h>
double function(int n,int x)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return 2.0*x;
    }
    else if(n>1)
    {
        return (2*x*function(n-1,x)-2*(n-1)*function(n-2,x))*1.0;
    }
    return 0;
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%0.2f",function(n,x));
    return 0;
}
