#include <stdio.h>
#include <limits.h>
#define N 5

int max[N], min[N];
int main(void)
{
    int a[N][N], i, j,flag = 1;
    /* 初始化最值 */
    for(i=0; i<N; i++)
    {
        max[i] = INT_MIN;
        min[i] = INT_MAX;
    }
    /* 输入数据，计算最值 */
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]< min[j])
                min[j] = a[i][j];//列最小
            if(a[i][j] > max[i])
                max[i] = a[i][j];//行最大
        }
    }
    /* 寻找鞍点，输出结果 */
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(max[i] == min[j])
            {
                /* 找到鞍点则输出，注意行列需要加以一*/
                printf("%d %d %d\n", i + 1, j + 1, max[i]);
                flag = 0;
            }
        }
    }
    if(flag)
        printf("not found\n");      /* 未找到鞍点 */
    return 0;

}
