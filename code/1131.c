#include <stdio.h>
int main()
{
    double a[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},sum=0;
    int b[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
        sum=sum+a[i]*b[i];
    }
    printf("%0.1f\n",sum);
    return 0;
}
//样例的结果是错的
