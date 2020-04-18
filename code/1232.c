#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int N,M,*p,i,j,flag=0;
    scanf("%d",&N);
    scanf("%d",&M);
    p=(int *)malloc((N+1)*sizeof(int));
    memset(p,0,(N+1)*sizeof(int));
    for(i=1; i<=M; i++)
    {
        for(j=1; j<=N; j++)
        {
            if(i*j<=N)
            p[i*j]=~p[i*j];
        }
    }
    for(i=1; i<=N; i++)
    {
        if(p[i]==-1)
        {
            if(flag==0)
            {
                printf("%d",i);
                flag=1;
            }
            else
            {
                printf(",%d",i);
            }

        }

    }
    free(p);
    return 0;
}
