#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
double f()
{
    string str;
    cin>>str;
    if(str=="+")
    {
        return f()+f();
    }
    if(str=="-")
    {
        return f()-f();
    }
    if(str=="*")
    {
        return f()*f();
    }
    if(str=="/")
    {
        return f()/f();
    }
    else
    {
        return atof(str.c_str());
    }

}
int main()
{
    printf("%f",f());
    return 0;
}
