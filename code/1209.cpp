#include <iostream>
using namespace std;
int h[1001];
int main()
{
    int n;
    cin>>n;
    h[1]=1;
    for(int s=2; s<=n; s++)
    {
        h[s]=1;
        for(int i=1; i<=s/2; i++)
        {
            h[s]+=h[i];
        }
    }
    cout<<h[n];
    return 0;
}
