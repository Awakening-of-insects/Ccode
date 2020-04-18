#include <stdio.h>
#include <stdlib.h>
struct People
{
    char name[8];
    float temperature;
    int  cough;
};

struct People *input(struct People* people)
{
    scanf("%s %f %d",people->name,&people->temperature,&people->cough);
    return people;
};

void printPeople(struct People* people)
{
    printf("%s\n",people->name);
}

int main()
{
    int i,n,count=0;
    struct People* p;
    scanf("%d",&n);
    p=(struct People *)malloc(n*sizeof(struct People));
    for(i=0;i<n;i++)
    {
        input(p+i);
    }
    for(i=0;i<n;i++)
    {   if((p+i)->temperature>=37.5&&(p+i)->cough==1)
        {
         printPeople(p+i);
         count++;
        }
    }
    printf("%d",count);
    free(p);
    return 0;
}
