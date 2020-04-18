#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node* next;
} Node;

void function(int n,int m)
{
    //1.定义变量
    int i,j;
    Node* first;
    Node* r;
    Node* p;
    Node* q;
    //2.建立结点
    first=(Node *)malloc(sizeof(Node));
    first->id=1;
    first->next=first;//指向自己，循环链表
    r=first;//尾结点
    //3.建立循环链表
    for(i=2; i<=n; i++)
    {
        Node *s=(Node *)malloc(sizeof(Node));
        s->id=i;
        s->next=r->next;
        r->next=s;
        r=s;
    }
    //开始删除，循环n次，每次移动m
    p=first;
    for(i=1; i<n; i++)
    {
        for(j=1; j<m-1; j++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        p=p->next;
        free(q);
    }
    printf("%d",p->id);
    free(p);
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    function(n,m);/*n总人数，从1开始，m为第几个人*/
    return 0;
}
