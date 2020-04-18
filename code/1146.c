#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *function(int *p,int a,int b)
{
    int i;
    for(i=a; i<=b; i++)
    {
        p[i]=1;
    }
    return p;
}
int main()
{
    int n,m,*p,i,a,b,count=0;
    scanf("%d%d",&n,&m);
    p=(int *)malloc((n+1)*sizeof(int));
    memset(p,0,(n+1)*sizeof(int));
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&a,&b);
        function(p,a,b);
    }
    for(i=0; i<=n; i++)
    {
        if(*(p+i)==0)
            count++;
    }
    printf("%d\n",count);
    free(p);
    return 0;
}
