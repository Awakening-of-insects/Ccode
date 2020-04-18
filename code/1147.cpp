#include <stdio.h>
int m[1000010];
void function()
{
    int i;
    m[1]=1;
    m[2]=1;
    for(i=3;i<1000010;i++)
    {
        m[i]=(m[i-2]+m[i-1])%1000;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    function();
    for(i=0;i<n;i++)
    {
        printf("%d\n",m[a[i]]);
    }
    return 0;
}
