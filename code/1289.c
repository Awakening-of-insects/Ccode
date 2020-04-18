#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
bool check(char* p)
{
    int sum=0,i;
    int w[18]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2,1};
    if(p[17]=='x'||p[17]=='X')
    {
        p[17]=58;
    }
    for(i=0; i<18; i++)
    {
        sum=sum+w[i]*(p[i]-48);
    }
    if(sum%11==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    char* p=(char *)malloc(18*sizeof(char));
    for(i=0; i<=n; i++)
    {
        gets(p);
        if(check(p)==1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    free(p);
    return 0;
}


