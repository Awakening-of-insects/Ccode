#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int N,add=0,flag=0,i;
    scanf("%d",&N);
    int a[N],b[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",a+i);
        if(a[i]%2==1)
        {
            b[add++]=a[i];
        }
    }
    sort(b,b+add);
    for(i=0; i<add; i++)
    {
        if(flag==0)
        {
            printf("%d",b[i]);
            flag=1;
        }
        else
        {
            printf(",%d",b[i]);
        }

    }

    return 0;
}
