#include <stdio.h>
#include <stdbool.h>
bool k3(int m, int k)
{
    int count=0;
    while(m)
    {
        if(m%10==3)
        {
            count++;
        }
        m=m/10;
    }
    if(count==k)
        return true;
    else return false;
}
int main()
{
    int m,k;
    scanf("%d%d",&m,&k);
    if(m%19==0&&k3(m,k))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
