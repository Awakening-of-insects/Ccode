#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,flag=0;
    char str[101000];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {

        for(j=0; j<strlen(str); j++)
        {
            if(str[i]==str[j]&&i!=j)
            {

                flag=1;
            }

        }
        if(flag==0)
        {
            printf("%c",str[i]);
            return 0;
        }
        flag=0;
    }
    printf("no");
}
