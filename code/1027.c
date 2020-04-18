#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int (*p)[b]=(int (*)[b])malloc(sizeof(int)*a*b);
    double (*q)[b]=(double (*)[b])malloc(sizeof(double)*a*b);
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&p[i][j]);
            q[i][j]=p[i][j];
        }
    }

    for(i=1; i<a-1; i++)
    {
        for(j=1; j<b-1; j++)
        {
            q[i][j]=round((p[i][j]+p[i+1][j]+p[i-1][j]+p[i][j+1]+p[i][j-1])/5.0);
        }

    }

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            printf("%0.lf ",*(*(q+i)+j));
        }
        printf("\n");
    }
    free(p);
    free(q);
    return 0;
}
