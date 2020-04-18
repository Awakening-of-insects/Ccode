#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *q,*p,n,i,sum=0;
    scanf("%d",&n);
    q=(int *)malloc(n*sizeof(int));
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",q+i);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+q[i]*p[i];
    }
    printf("%d\n",sum);
    free(p);
    free(q);
    return 0;
}
