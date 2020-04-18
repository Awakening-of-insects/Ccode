#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void function(int *p,int n)
{
    int max=p[0],i,*q;
    for(i=0; i<n; i++)
    {
        if(max<p[i])
        {
            max=p[i];
        }
    }
    q=(int *)malloc((max+1)*sizeof(int));
    memset(q,0,(max+1)*sizeof(int));
    for(i=0; i<n; i++)
    {
        q[*(p+i)]++;
    }
    for(i=0; i<=max; i++)
    {
        printf("%d\n",q[i]);
    }
    free(q);
}

int main()
{
    int n,i,*p;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
        getchar();
    }
    function(p,n);
    free(p);
    return 0;
}
