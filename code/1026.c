#include <stdio.h>
#include <limits.h>
#define N 5

int max[N], min[N];
int main(void)
{
    int a[N][N], i, j,flag = 1;
    /* ��ʼ����ֵ */
    for(i=0; i<N; i++)
    {
        max[i] = INT_MIN;
        min[i] = INT_MAX;
    }
    /* �������ݣ�������ֵ */
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]< min[j])
                min[j] = a[i][j];//����С
            if(a[i][j] > max[i])
                max[i] = a[i][j];//�����
        }
    }
    /* Ѱ�Ұ��㣬������ */
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(max[i] == min[j])
            {
                /* �ҵ������������ע��������Ҫ����һ*/
                printf("%d %d %d\n", i + 1, j + 1, max[i]);
                flag = 0;
            }
        }
    }
    if(flag)
        printf("not found\n");      /* δ�ҵ����� */
    return 0;

}
