#include <iostream>
using namespace std;

int main()
{
    long long x,y,z,i,worm[55]= {0},zero[55]= {0};
    cin>>x>>y>>z;
    for(i=1; i<=x; i++)
    {
        worm[i]=1;
        zero[i]=0;//x个月前是没有卵的
    }
    for(i=1+x; i<=z+1; i++)
    {
        zero[i]=worm[i-x]*y;//在i月的幼虫只与i-z月前的成虫有关
        worm[i]=worm[i-1]+zero[i-2];//上个月的虫和两个月前的虫卵

    }
    cout<<worm[z+1];
    return 0;
}



