#include <stdio.h>
#include <string.h>
#define max 120

int t[max],sum[max]= {0};
int* factorial(int n)
{
    int flag=0,temp,i,j;
    memset(t,0,sizeof(t));
    t[max-1]=1;
    for(j=n; j>0; j--)
    {
        for(i=max-1; i>0; i--)
        {
            temp=t[i]*j+flag;
            t[i]=temp%10;
            flag=temp/10;
        }
    }
    return t;
}

int* result(int sum[max],int b[max])
{
    int flag=0,i;
    for(i=max-1; i>0; i--)
    {
        int temp=sum[i]+b[i]+flag;
        sum[i]=temp%10;
        flag=temp/10;
    }
    return sum;
}

void print(int a[])
{
    int i;
    for(i=0; i<max; i++)   //出去数组多余的0
        if(a[i]!=0)
            break;
    for(; i<max; i++)    //按序输出
        printf("%d",a[i]);
}

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        result(sum,factorial(i));
    }
    print(sum);
    return 0;
}
