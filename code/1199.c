#include <stdio.h>
int main()
{
    int m,n,i,j;
    int a[21][21]={0};
    scanf("%d%d",&m,&n);
    for(i=1; i<21; i++)
    {
        a[1][i]=1;
        a[i][1]=1;
    }
    for(i=2;i<21;i++)
    {
        for(j=2;j<21;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d",a[m][n]);
    return 0;
}
