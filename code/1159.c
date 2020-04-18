#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,k,i1,j1;
    scanf("%d%d%d",&N,&i,&j);
    for(k=1; k<=N; k++)
    {
        printf("(%d,%d) ",i,k);
    }
    printf("\n");

    for(k=1; k<=N; k++)
    {
        printf("(%d,%d) ",k,j);
    }
    printf("\n");
    i1=i;
    j1=j;
    while(i1!=1&&j1!=1)
    {
        i1--;
        j1--;
    }
    while(i1<=N&&j1<=N)
    {
        printf("(%d,%d) ",i1++,j1++);
    }
    printf("\n");

    while(i!=N&&j!=1)
    {
        i++;
        j--;
    }
    while(i>=1&&j<=N)
    {
        printf("(%d,%d) ",i--,j++);
    }
    return 0;
}



