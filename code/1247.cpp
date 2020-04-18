#include <iostream>
#include <stack>
using namespace std;
char flag[101];
string str;
stack<int> s;
int main()
{
    while(getline(cin,str))
    {
        int len=str.length();
        for(int i=0; i<len; i++)
        {
            flag[i]=' ';
            if(str[i]=='(')
            {
                s.push(i);
            }
            if(str[i]==')')
            {
                if(s.empty())
                {
                    flag[i]='?';
                }
                else
                {
                    s.pop();
                }
            }
        }
        while(!s.empty())
        {
            int j=s.top();
            s.pop();
            flag[j]='$';

        }
        flag[len]='\0';
        cout<<str<<endl<<flag<<endl;
    }

    return 0;
}
