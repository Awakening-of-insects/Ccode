#include <stdio.h>
int function(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else
    {
        return function(n-1)+function(n-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",function(n));
    return 0;
}
