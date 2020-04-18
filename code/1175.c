#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[101],n;
    scanf("%s",str);
    int len=strlen(str);
    n=str[0];
    for(i=0; i<len-1; i++)
    {
        str[i]=str[i]+str[i+1];
    }
    str[len-1]=str[len-1]+n;
    printf("%s",str);
    return 0;
}
