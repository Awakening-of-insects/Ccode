#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,count=0;
    char str[256];
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]>=48&&str[i]<=57)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}



