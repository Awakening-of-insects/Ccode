#include <stdio.h>
//max
double max(double x,double y, double z)
{
    double max;
    max=x;
    if(max<y)
    {
        max=y;
        if(max<z)
        {
            return z;
        }
        else
        {
            return y;
        }
    }
    else if(max<z)
    {
        max=z;
        if(max<y)
        {
            return y;
        }
        else
        {
            return z;
        }

    }
    else
    {
        return max;
    }
}

int main()
{
    double a,b,c,m;
    scanf("%lf%lf%lf",&a,&b,&c);
    m=max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
    printf("%.3f",m);
    return 0;
}
