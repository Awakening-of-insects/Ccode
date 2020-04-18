#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isprime(int n)
{
    int i;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)break;
    }
    if(i<=sqrt(n))return false;
    else return true;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=(int)n/2; i>=2; i--)
    {
        if(isprime(i)&&isprime(n-i))
        {
            printf("%d",i*(n-i));
            break;
        }
    }

    return 0;
}
