#include <stdio.h>
#define max 40000
int main()
{
    int a[max]= {0},n,flag=0,temp,i,j;
    scanf("%d",&n);
    a[max-1]=1;
    for(j=n;j>0;j--)
    {
        for(i=max-1; i>0; i--)
        {
            temp=a[i]*j+flag;
            a[i]=temp%10;
            flag=temp/10;
        }
    }
    for(i=0; i<max; i++)   //��ȥ��������0
        if(a[i]!=0) break;
    for(; i<max; i++)    //�������
        printf("%d",a[i]);
    return 0;
}
