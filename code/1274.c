#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*p,i,max=0;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
        getchar();
        if(max<*(p+i))
            max=*(p+i);
    }
    printf("%d\n",max);
    free(p);
    return 0;
}
