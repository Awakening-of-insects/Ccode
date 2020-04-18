#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5][5],i,j,m,n,temp[5];
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&m,&n);
    for(j=0;j<5;j++)
    {
        temp[j]=a[m-1][j];
        a[m-1][j]=a[n-1][j];
        a[n-1][j]=temp[j];
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
