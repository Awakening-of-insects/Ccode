#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ṹ��
struct bignum
{
    int d[201];
    int len;
    bignum()
    {
        memset(d,0,sizeof(d));
        len=0;
    }
};
//�ַ�����ṹ��
bignum change(char str[])
{
    bignum a;
    a.len=strlen(str);
    for(int i=0; i<a.len; i++)
    {
        a.d[i]=str[a.len-i-1]-'0';//�����������
    }
    return a;
}
//�Ƚ�
int compare(bignum a,bignum b)
{
    if(a.len>b.len)
        return 1;
    else if(a.len<b.len)
        return -1;
    else
    {
        for(int i=a.len-1; i>=0; i--)
        {
            if(a.d[i]>b.d[i])
                return 1;
            else if(a.d[i]<b.d[i])
                return -1;
        }
        return 0;
    }
}
//����
bignum sub(bignum a,bignum b)
{
    bignum c;
    for(int i=0; i<a.len||i<b.len; i++)
    {
        if(a.d[i]<b.d[i])
        {
            a.d[i+1]--;
            a.d[i]+=10;
        }
        c.d[c.len++]=a.d[i]-b.d[i];
    }
    while(c.len-1>=1&&c.d[c.len-1]==0)
    {
        c.len--;
    }
    return c;
}
//���
void print(bignum a)
{
    for(int i=a.len-1; i>=0; i--)
    {
        printf("%d",a.d[i]);
    }
}
int main()
{
    char a[201],b[201];
    scanf("%s%s",a,b);
    bignum c=change(a);
    bignum d=change(b);
    if(compare(c,d)==1)
    {
        print(sub(c,d));
    }
    else if(compare(c,d)==-1)
    {
        print(sub(d,c));
    }
    else
    {
        printf("0");
    }

    return 0;
}
