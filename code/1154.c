#include <stdio.h>
int main()
{
    int a[10],i,n,count=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        getchar();
    }
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        if(a[i]<=n+30)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
