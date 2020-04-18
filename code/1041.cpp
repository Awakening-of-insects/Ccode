#include <iostream>
using namespace std;
long long function(int n,int k)
{
    if(k==0||k>n)
    {
        return 0;
    }
    else if(k==1||n==k)
    {
        return 1;
    }
    else
        return  function(n-1,k-1)+k*function(n-1,k);
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout <<function(n,k)<< endl;
    return 0;
}
