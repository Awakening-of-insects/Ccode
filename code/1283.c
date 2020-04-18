#include <stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a)
    {
        b=a%10;
        printf("%d ",b);
        a=a/10;
    }
    return 0;
}
