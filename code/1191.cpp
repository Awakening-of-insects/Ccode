#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
struct people
{
    string sex;
    double tall;
};
bool cmp(people a,people b)
{
    if(a.sex!=b.sex)
    {
        return a.sex>b.sex;
    }
    else
    {
        if(a.sex=="male"||b.sex=="male")
        {
            return a.tall<b.tall;
        }
        else
        {
            return a.tall>b.tall;
        }
    }
};

int main()
{

    int n,i;
    cin>>n;
    people peo[n];
    for(i=0; i<n; i++)
    {
        cin>>peo[i].sex>>peo[i].tall;
    }
    sort(peo,peo+n,cmp);
    for(i=0; i<n; i++)
    {
        cout <<fixed<< setprecision(2)<<peo[i].tall<<" ";
    }
    return 0;
}
