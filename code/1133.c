#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,sum=0;
    scanf("%d%d",&m,&n);
    int (*p)[n]=(int (*)[n])malloc(sizeof(int)*m*n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",*(p+i)+j);
        }
    }

    for(i=1; i<m-1; i++)
    {
        for(j=1; j<n-1; j++)
        {
            p[i][j]=0;
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=sum+p[i][j];
        }
    }
    printf("%d",sum);
    free(p);
    return 0;
}
