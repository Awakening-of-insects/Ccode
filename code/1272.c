#include <stdio.h>
#include <stdlib.h>
int function(int n)
{
    int coins=0,k=1,days=0,j;
    {
        while(days+k<=n)
        {
           coins=coins+k*k;
           days=days+k;
           k=k+1;
        }
        j=n-days;
        coins=coins+k*j;
        return coins;

    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",function(n));
    return 0;
}
