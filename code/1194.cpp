#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,i,j,flag=0,add=0;
    scanf("%d",&n);
    int a[n],b[n]= {0};
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            b[add++]=a[i];
        }
        else
        {
            flag=0;
        }
    }
    sort(b,b+add);
    printf("%d\n",add);
    for(i=0; i<add; i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
