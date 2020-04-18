#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,m,*p,i,count=0;
    scanf("%d%d",&N,&m);
    p=(int *)malloc(N*sizeof(int));
    for(i=0;i<N;i++)
    {
        scanf("%d",p+i);
        getchar();
        if(*(p+i)==m)
            count++;
    }
    printf("%d\n",count);
    free(p);
    return 0;
}
