#include <stdio.h>
int main()
{
    int m[100][100]={0};
    int carry=0,i=0,j;
    int len=0,a[100];
    do
    {
        scanf("%d",&a[i]);
        len=i;
        i++;
    }
    while(a[len]!=0);
    m[1][99]=1;
    m[2][99]=2;
    m[3][99]=4;
    for(i=4; i<72; i++)
    {
        for(int j=99; j>=0; j--)
        {

            int temp=m[i-3][j]+m[i-2][j]+m[i-1][j]+carry;
            m[i][j]=temp%10;
            carry=temp/10;
        }
    }

    for(i=0; i<len; i++)
    {
        for(j=0; j<100; j++)
        {
            if(m[a[i]][j]!=0)
                break;
        }
        for(; j<100; j++)
        {
            printf("%d",m[a[i]][j]);
        }
        printf("\n");
    }
    return 0;
}
