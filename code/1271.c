#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isprime(int n)
{
    int i;
    for(i=2;i<=(int)sqrt(n);i++)
    {
        if(n%i==0)break;
    }
    if(i<=sqrt(n))return false;
    else return true;
}
int main()
{
    int i,a,j=0,p=0;
    scanf("%d",&a);
    for(i=2;i<10000;i++)
    {
        if(isprime(i))
        {
            p=i;
            j++;
            if(j==a)break;
        }
    }
    printf("%d",p);
    return 0;
}
