#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct stu
{
    string name;
    int score;
};

bool cmp(stu a,stu b)
{
    if(a.score!=b.score)
    {
        return a.score>b.score;
    }
    else
    {
        return a.name<b.name;
    }

};

int main()
{
    int N,i;
    cin>>N;
    stu people[N];
    for(i=0; i<N; i++)
    {
        cin>>people[i].name>>people[i].score;
    }
    sort(people,people+N,cmp);
    for(i=0; i<N; i++)
    {
        cout<<people[i].name<<" "<<people[i].score<<endl;
    }
    return 0;
}
