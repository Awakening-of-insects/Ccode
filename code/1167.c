#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[33];
    scanf("%s",str);
    int len=strlen(str)-1;
    if(str[len-1]=='e'&&str[len]=='r')
    {
        for(i=0; i<len-1; i++)
        {
            printf("%c",str[i]);
        }
    }
    else if(str[len-1]=='l'&&str[len]=='y')
    {
        for(i=0; i<len-1; i++)
        {
            printf("%c",str[i]);
        }

    }
    else if(str[len-2]=='i'&&str[len-1]=='n'&&str[len]=='g')
    {
        for(i=0; i<len-2; i++)
        {
            printf("%c",str[i]);
        }
    }
    else
    {
        printf("%s",str);
    }
    return 0;
}
