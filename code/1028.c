#include <stdio.h>
#include <string.h>
int main()
{
    int i,temp;
    char str[256];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    for(i=0; i<strlen(str)/2; i++)
    {
        temp=str[i];
        str[i]=str[strlen(str)-i-1];
        str[strlen(str)-i-1]=temp;
    }
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]=(str[i]-65+3)%26+65;
        }
        else if(str[i]>=97&&str[i]<=122)
        {
            str[i]=(str[i]-97+3)%26+97;
        }
    }
    printf("%s",str);
    return 0;
}
