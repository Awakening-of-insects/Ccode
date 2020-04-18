#include <iostream>

using namespace std;
int flag[1000]= {0};
int main()
{
    int x,add=0;
    for(int i=0; i<1000; i++)
    {
        flag[i]=30000;
    }
    while(cin>>x)
    {
        for(int i=0; i<1000; i++)
        {
            if(flag[i]>=x)
            {
                flag[i]=x;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    for(int i=0; flag[i]!=30000; i++)
    {
        add++;
    }
    cout<<add;
    return 0;
}
