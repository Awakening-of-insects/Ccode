#include <stdio.h>
void hanoi(int n,char a,char b,char c)
{
    if(n==1)
    {
        printf("%c->%d->%c\n",a,n,c);
    }
    else
    {
        hanoi(n-1,a,c,b);
        printf("%c->%d->%c\n",a,n,c);
        hanoi(n-1,b,a,c);
    }

}
int main()
{
    int num;
    char a,b,c;
    scanf("%d %c %c %c",&num,&a,&b,&c);
    hanoi(num,a,b,c);
    return 0;
}
