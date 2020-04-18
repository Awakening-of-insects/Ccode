#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,i,j,add=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<=1000;j++)
        {
            if(a*i+b*j==c)
            {
                add++;
            }
        }
    }
    printf("%d",add);
    return 0;
}
