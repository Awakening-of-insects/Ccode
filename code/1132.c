#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,n,i;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        getchar();
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}
