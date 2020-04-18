#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int (*p)[b]=(int (*)[b])malloc(sizeof(int)*a*b);
    int (*q)[b]=(int (*)[b])malloc(sizeof(int)*a*b);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&q[i][j]);
            p[i][j]=p[i][j]+q[i][j];
        }
    }
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    free(p);
    free(q);
    return 0;
}
