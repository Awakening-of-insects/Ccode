#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node* next;
} Node;

void function(int n,int m)
{
    //1.�������
    int i,j;
    Node* first;
    Node* r;
    Node* p;
    Node* q;
    //2.�������
    first=(Node *)malloc(sizeof(Node));
    first->id=1;
    first->next=first;//ָ���Լ���ѭ������
    r=first;//β���
    //3.����ѭ������
    for(i=2; i<=n; i++)
    {
        Node *s=(Node *)malloc(sizeof(Node));
        s->id=i;
        s->next=r->next;
        r->next=s;
        r=s;
    }
    //��ʼɾ����ѭ��n�Σ�ÿ���ƶ�m
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
    function(n,m);/*n����������1��ʼ��mΪ�ڼ�����*/
    return 0;
}
