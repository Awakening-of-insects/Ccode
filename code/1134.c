#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int (*p)[m]=(int (*)[m])malloc(sizeof(int)*n*m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }
    for(j=0; j<m; j++)
    {
        for(i=n-1; i>=0; i--)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    free(p);
    return 0;
}
