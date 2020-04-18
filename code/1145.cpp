#include <stdio.h>
#include <algorithm>
using namespace std;

struct stu
{
    int num;
    double score;
};

bool cmp(stu a,stu b)
{
    return a.score>b.score;

};

int main()
{
    int N,M,i;
    scanf("%d %d",&N,&M);
    stu people[N];
    for(i=0; i<N; i++)
    {
        scanf("%d %lf",&people[i].num,&people[i].score);
    }
    stable_sort(people,people+N,cmp);
    printf("%d %g",people[M-1].num,people[M-1].score);
    return 0;
}
