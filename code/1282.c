#include <stdio.h>
int main()
{
    int k,i=1;
    double sum=0;
    scanf("%d",&k);
    while(sum<=k)
    {
        sum=sum+(double)1/i;
        i++;
    }
    printf("%d\n",i-1);
    return 0;
}
