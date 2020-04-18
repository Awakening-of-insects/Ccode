#include <stdio.h>
int num(int n)
{
    int count=0,temp=0,i,add=0;
    temp=n;
    while(temp)
    {
        temp=temp/10;
        count++;
    }
    for(i=1; i<=count; i++)
    {

        if(n%10==2)
        {
            add++;
        }
        n=n/10;
    }
    return add;
}
int main()
{
    int n,i,sum=0,a;
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)
    {
        sum=sum+num(i);
    }
    printf("%d\n",sum);
    return 0;
}
