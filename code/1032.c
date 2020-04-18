#include <stdio.h>
#include <stdlib.h>
int F(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2||n==3)
    {
        return 1;
    }
    else
    {
        return F(n-1)+F(n-2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",F(n));
    return 0;
}
