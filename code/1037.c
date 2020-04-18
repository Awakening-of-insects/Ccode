#include <stdio.h>
#include <string.h>
void function(int flag[26])
{
    int i,max=flag[0];
    for(i=0; i<26; i++)
    {
        if(max<flag[i])
        {
            max=flag[i];
        }
    }
    for(i=0; i<26; i++)
    {
        if(flag[i]==max)
        {
            printf("%c %d",i+97,flag[i]);
            break;
        }
    }
}
int main()
{
    int i,flag[26]= {0};
    char a[1000];
    scanf("%s",a);
    int len=strlen(a);
    for(i=0; i<len; i++)
    {
        flag[a[i]-97]++;
    }
    function(flag);
    return 0;
}
