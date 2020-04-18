#include <stdio.h>
int m[1000010];
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    m[1]=1;
    m[2]=2;
    for(i=3; i<1000000; i++)
    {
        m[i]=(m[i-1]*2+m[i-2])%32767;
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n",m[a[i]]);
    }
    return 0;
}
