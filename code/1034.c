#include <stdio.h>
int main()
{
    int N,a[50]= {0},flag=0,temp,i;
    scanf("%d",&N);
    a[49]=1;
    while(N--)
    {
        for(i=49; i>0; i--)
        {
            temp=a[i]*2+flag;
            a[i]=temp%10;
            flag=temp/10;
        }
    }
    for(i=0; i<50; i++)   //出去数组多余的0
        if(a[i]!=0) break;
    for(; i<50; i++)    //按序输出
        printf("%d",a[i]);
    return 0;
}
