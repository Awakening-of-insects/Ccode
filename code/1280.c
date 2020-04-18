#include <stdio.h>
int main()
{
    int a,b,i,sum=1;
    scanf("%d%d",&a,&b);
    for(i=0; i<b; i++)
    {
        sum=(sum*a)%7;
    }
    if(sum==0) printf("Sunday");
    if(sum==1) printf("Monday");
    if(sum==2) printf("Tuesday");
    if(sum==3) printf("Wednesday");
    if(sum==4) printf("Thursday");
    if(sum==5) printf("Friday");
    if(sum==6) printf("Saturday");
    return 0;
}
