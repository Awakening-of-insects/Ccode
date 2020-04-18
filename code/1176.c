#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[21];
    scanf("%s",a);
    int len= strlen(a);
    if(a[0]>=48&&a[0]<=57)
    {
        printf("no");
        return 0;
    }
    else
    {
        for(i=0; i<len; i++)
        {
            if(a[i]==95||(a[i]>=48&&a[i]<=57)||(a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            {
                continue;
            }
            else
            {
                printf("no");
                return 0;
            }

        }
    }
    printf("yes");
    return 0;
}
