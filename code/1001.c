#include <stdio.h>
#include <stdlib.h>
struct People
{
    char name[20];
    int qmc;
    int byc;
    char  xg;
    char  xb;
    int   lw;
    int   sum_monny;
};

struct People *input(struct People* people)
{
    scanf("%s %d %d %c %c %d",people->name,&people->qmc,&people->byc,&people->xg,&people->xb,&people->lw);
    return people;
};

void printPeople(struct People* people,int n)
{
    int i,sum=0,max=0,flag;
    max=people[0].sum_monny;
    for(i=0; i<n; i++)
    {
        if(max<=people[i].sum_monny)
        {
            max=people[i].sum_monny;
        }
        sum=sum+people[i].sum_monny;
    }
    for(i=0; i<n; i++)
    {
        if(max==people[i].sum_monny)
        {
            flag=i;
            break;
        }
    }
    printf("%s\n",people[flag].name);
    printf("%d\n",max);
    printf("%d\n",sum);
}

void Peoplemoney(struct People* people,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        people[i].sum_monny=0;

        if(people[i].qmc>80&&people[i].lw>=1)
        {
            people[i].sum_monny=people[i].sum_monny+8000;
        }
        if(people[i].qmc>85&&people[i].byc>80)
        {
            people[i].sum_monny=people[i].sum_monny+4000;
        }
        if(people[i].qmc>90)
        {
            people[i].sum_monny=people[i].sum_monny+2000;
        }
        if(people[i].qmc>85&&people[i].xb=='Y')
        {
            people[i].sum_monny=people[i].sum_monny+1000;
        }
        if(people[i].byc>80&&people[i].xg=='Y')
        {
            people[i].sum_monny=people[i].sum_monny+850;
        }
    }

}
int main()
{
    int i,n;
    struct People* p;
    scanf("%d",&n);
    p=(struct People *)malloc(n*sizeof(struct People));
    for(i=0; i<n; i++)
    {
        input(p+i);
    }
    Peoplemoney(p,n);
    printPeople(p,n);
    free(p);
    return 0;
}
