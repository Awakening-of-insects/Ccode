#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,n,i,a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
        getchar();
        if(*(p+i)>=0&&*(p+i)<=18) a++;
        if(*(p+i)>=19&&*(p+i)<=35) b++;
        if(*(p+i)>=36&&*(p+i)<=60) c++;
        if(*(p+i)>=61) d++;
    }
    printf("%.2f%%\n",(double)a/n*100);
    printf("%.2f%%\n",(double)b/n*100);
    printf("%.2f%%\n",(double)c/n*100);
    printf("%.2f%%\n",(double)d/n*100);
    free(p);
    return 0;
}
