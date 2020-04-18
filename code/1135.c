#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int N,i,*p,l1,l2;
    char str1[10],str2[10];
    scanf("%d",&N);
    p=(int *)malloc(N*sizeof(int));
    for(i=0; i<N; i++)
    {
        scanf("%s %s",str1,str2);
        l1=strlen(str1);
        l2=strlen(str2);
        if(l1==l2)
        {
            p[i]=0;
        }
        if(l1==4&&l2==8)
        {
            p[i]=1;
        }
        if(l1==8&&l2==4)
        {
            p[i]=2;
        }
        if(l1==4&&l2==5)
        {
            p[i]=2;
        }
        if(l1==5&&l2==4)
        {
            p[i]=1;
        }
        if(l1==5&&l2==8)
        {
            p[i]=2;
        }
        if(l1==8&&l2==5)
        {
            p[i]=1;
        }
    }
    for(i=0; i<N; i++)
    {
        if(p[i]==0)
        {
            printf("Tie\n");
        }
        else if(p[i]==1)
        {
            printf("Player1\n");
        }
        else if(p[i]==2)
        {
            printf("Player2\n");
        }

    }
    free(p);
    return 0;
}

