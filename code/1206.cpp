#include <iostream>
using namespace std;

int main()
{
    long long x,y,z,i,worm[55]= {0},zero[55]= {0};
    cin>>x>>y>>z;
    for(i=1; i<=x; i++)
    {
        worm[i]=1;
        zero[i]=0;//x����ǰ��û���ѵ�
    }
    for(i=1+x; i<=z+1; i++)
    {
        zero[i]=worm[i-x]*y;//��i�µ��׳�ֻ��i-z��ǰ�ĳɳ��й�
        worm[i]=worm[i-1]+zero[i-2];//�ϸ��µĳ��������ǰ�ĳ���

    }
    cout<<worm[z+1];
    return 0;
}



