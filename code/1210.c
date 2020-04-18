#include <stdio.h>
int main()
{
    int n,i,a[21];
    scanf("%d",&n);
    a[0]=0;
    a[1]=3;
    a[2]=7;
    for(i=3;i<=n;i++)
        a[i]=2*a[i-1]+a[i-2];
    printf("%d",a[n]);
    return 0;
}
