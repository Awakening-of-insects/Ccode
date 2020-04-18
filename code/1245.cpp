#include <iostream>
using namespace std;
int function(int m,int n)
{
    if(m==0||n==1)
        return 1;
    if(m<n)
        return function(m,m);
    else
        return function(m,n-1)+function(m-n,n);
}
int main()
{
    int t,m[21],n[21],result[21]={0};
    cin>>t;
    for( int i=0; i<t; i++)
    {
        cin>>m[i]>>n[i];
        result[i]=function(m[i],n[i]);
    }
    for( int i=0; i<t; i++)
    {
        cout<<result[i]<<endl;
    }

    return 0;
}
