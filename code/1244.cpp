#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    char a[101][101];
    int n,i,j,t,add=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)//还有一个空格要接收
        {
            cin>>a[i][j];
        }
    }
    cin>>t;
    while(t--)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i][j]=='!')
                    a[i][j]='@';

            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i][j]=='@')
                {
                    if(i-1>=0&&a[i-1][j]=='.')
                        a[i-1][j]='!';
                    if(i+1<n&&a[i+1][j]=='.')
                        a[i+1][j]='!';
                    if(j-1>=0&&a[i][j-1]=='.')
                        a[i][j-1]='!';
                    if(j+1<n&&a[i][j+1]=='.')
                        a[i][j+1]='!';
                }
            }
        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][j]=='@')
                add++;
        }

    }
    cout<<add;
    return 0;
}
