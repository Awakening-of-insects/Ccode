#include <stdio.h>
int main()
{
    int z[40],num=0,y,Q;
    scanf("%d%d",&y,&Q);
    do{
        z[num++]=y%Q;
        y=y/Q;
    }while(y!=0);
    for(;num>0;num--)
    {
        if(z[num-1]>=0&&z[num-1]<10)
        {
            printf("%d",z[num-1]);
        }
        if(z[num-1]==10)
        {
            printf("A");
        }
        if(z[num-1]==11)
        {
            printf("B");
        }
        if(z[num-1]==12)
        {
            printf("C");
        }if(z[num-1]==13)
        {
            printf("D");
        }if(z[num-1]==14)
        {
            printf("E");
        }
        if(z[num-1]==15)
        {
            printf("F");
        }
    }
    return 0;
}
