#include <stdio.h>
#include <string.h>
int main()
{
    int i,count=1;
    char str[1005];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            printf("%d%c",count,str[i]);
            count=1;
        }
    }
    return 0;
}
