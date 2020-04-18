#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

bignum change(char str[])
{
    bignum a;
    a.len=strlen(str);
    for(int i=0; i<a.len; i++)
    {
        a.d[i]=str[a.len-i-1]-'0';//反过来输入的
    }
    return a;
}

bignum add(bignum a,bignum b)
{
    bignum c;
    int carry=0;
    for(int i=0; i<a.len||i<b.len; i++)
    {
        int temp=a.d[i]+b.d[i]+carry;
        c.d[c.len++]=temp%10;
        carry=temp/10;
    }
    if(carry!=0)
    {
        c.d[c.len++]=carry;
    }
    return c;
}

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
    print(add(c,d));
    return 0;
}
