#include <stdio.h>
#include <algorithm>
using namespace std;
struct stu
{
    int num;
    int china;
    int math;
    int english;
    int sum;
};
bool cmp(stu a,stu b)
{
    if(a.sum!=b.sum)
    {
        return a.sum>b.sum;
    }
    else
    {
        if(a.china!=b.china)
        {
            return a.china>b.china;
        }
        else
        {
            return a.num<b.num;
        }
    }
};
int main()
{
    int n,i;
    scanf("%d",&n);
    stu student[n];
    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&student[i].china,&student[i].math,&student[i].english);
        student[i].num=i+1;
        student[i].sum=student[i].china+student[i].math+student[i].english;
    }
    sort(student,student+n,cmp);
    for(i=0; i<5; i++)
    {
        printf("%d %d\n",student[i].num,student[i].sum);
    }
    return 0;
}
