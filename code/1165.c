#include <stdio.h>
#include <string.h>
int main()
{
    int i,flag[26]= {0};
    char str[1000001];
    gets(str);
    int len=strlen(str);
    for(i=0; i<len; i++)
    {
        flag[str[i]-97]++;
    }
    for(i=0; i<26; i++)
    {
        if(flag[i]==1)
        {
            printf("%c",i+97);
            return 0;
        }

    }
    printf("no");
    return 0;
}
