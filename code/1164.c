#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,i,j,count=0;
    double cul;
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
            if(p[i][j]==q[i][j])
                count++;
        }
    }
    cul=(count*100)/(a*b*1.0);
    printf("%0.2f ",cul);
    free(p);
    free(q);
    return 0;
}
