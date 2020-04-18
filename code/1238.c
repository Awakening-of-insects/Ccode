#include <stdio.h>
int digit(int n,int k)
{
    int b;
    while(k--)
    {
        b=n%10;
        n=n/10;
    }

    return b;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",digit(n,k));
    return 0;
}
