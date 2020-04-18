#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void function(double *p,int n)
{
    int i;
    double max,min,sum=0,mean,temp=0;
    max=p[0];
    min=p[0];
    for(i=0;i<n;i++)
    {
        if(max<p[i]) max=p[i];
        if(min>p[i]) min=p[i];
        sum=sum+p[i];
    }
    mean=(sum-max-min)/(n-2);
    for(i=0;i<n;i++)
    {
        if(p[i]!=max&&p[i]!=min)
        {
            if(temp<fabs(p[i]-mean))
                temp=fabs(p[i]-mean);
        }
    }
    printf("%0.2f %0.2f",mean,temp);

}
int main()
{
    int n,i;
    double *p;
    scanf("%d",&n);
    p=(double *)malloc(n*sizeof(double));
    for(i=0;i<n;i++)
    {
        scanf("%lf",p+i);
    }
    function(p,n);
    free(p);
    return 0;
}
