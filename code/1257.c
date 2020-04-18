#include <stdio.h>
int main()
{
    int max=0,min=0,mul=0,temp=0;
    scanf("%d%d",&max,&min);
    mul=max*min;
    if(max<min)
    {
        temp=max;
        max=min;
        min=temp;
    }
    while(max%min!=0)
    {
        temp=min;
        min=max%min;
        max=temp;
    }
    printf("最大公约数：%d\n",min);
    printf("最小公倍数：%d\n",mul/min);
    return 0;
}
