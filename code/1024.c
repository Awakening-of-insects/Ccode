#include <stdio.h>

int main()
{
    int a[7],b[7],i,count=0,flag,max=0;
    for(i=0; i<7; i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0; i<7; i++)
    {
        if(a[i]+b[i]>8)
        {
            if(a[i]+b[i]>max)
            {
                max=a[i]+b[i];
                flag=i;
            }

        }
        else
        {
            count++;
        }
    }
    if(count==7)
    {

        printf("0");
    }
    else
    {
        printf("%d",flag+1);
    }

    return 0;
}
