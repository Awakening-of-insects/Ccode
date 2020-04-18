#include <stdio.h>
int main()
{
    int n,num=0,count=0,i;
    scanf("%d",&n);
    int temp=n;
    while(temp)
    {
        temp/=10;
        count++;
    }
    for(i=0;i<count;i++)
    {
        num=num*10+n%10;
        n/=10;
    }
    printf("%d",num);
    return 0;
}
