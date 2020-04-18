#include <stdio.h>
#include <stdbool.h>
bool num(int n)
{
    int sum=0,i;
    for(i=1;i<=(int)n/2; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        return true;
    else return false;
}
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(num(i))
            count++;
    }
    printf("%d\n",count);
    return 0;
}
