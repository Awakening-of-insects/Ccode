#include <stdio.h>
int reversenum(int n)
{
    int num=0,temp,add=0,i;
    temp=n;
    while(temp)//ͳ�����ָ���
    {
        temp/=10;
        add++;
    }
    for(i=0; i<add; i++) //��ת����
    {
        num=num*10+n%10;
        n/=10;
    }
    return num;
}
int main()
{

    int n;
    scanf("%d",&n);
    if(n==reversenum(n))
    {
        if(n>10)
        {
            printf("Y");
        }
        else
        {
            printf("N");
        }
    }
    else
    {
        printf("N");
    }

    return 0;
}
