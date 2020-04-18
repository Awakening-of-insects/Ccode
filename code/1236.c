#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[81];
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        if((a[i]>=65&&a[i]<=89)||(a[i]>=97&&a[i]<=121))
        {
            a[i]=a[i]+1;
        }
        else if(a[i]==90||a[i]==122)
        {
            a[i]=a[i]-25;
        }
        else
        {
            continue;
        }

    }
    printf("%s",a);
    return 0;
}
