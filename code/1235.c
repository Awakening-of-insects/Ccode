#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[256];
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='A')
        {
            str[i]=str[i]+19;
        }
        else if(str[i]=='T')
        {
            str[i]=str[i]-19;
        }
        else if(str[i]=='C')
        {
            str[i]=str[i]+4;
        }
        else if(str[i]=='G')
        {
            str[i]=str[i]-4;
        }
    }
    printf("%s",str);
    return 0;
}
