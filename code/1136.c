#include <stdio.h>
#include <string.h>

int main()
{
    int count=0,i;
    double n;
    char str1[502],str2[502];
    scanf("%lf",&n);
    scanf("%s",str1);
    scanf("%s",str2);
    for(i=0; i<strlen(str1); i++)
    {
        if(str1[i]==str2[i])
        {
            count++;
        }
    }
    if(count/(strlen(str1)*1.0)>=n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
