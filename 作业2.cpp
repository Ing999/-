#include<stdio.h>
#include<stdlib.h>
int main()
{
	int e[10][10], k, i, j, n, m, t1, t2, t3;
	int inf = 0x3f3f3f; //用inf存储一个我们认为的正无穷大值
	scanf_s("%d %d", &n, &m); //n表示顶点个数，m表示边的条数

	for (i = 1; i <= n; i++)//初始化 
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
				e[i][j] = 0;
			else
				e[i][j] = inf;
		}
	}

	for (i = 1; i <= m; i++)//输入边
	{
		scanf_s("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3; //表示 t1 到 t2 的路程为 t3  ,这边是有向图，所以只需要赋值一个即可，若是无向图，则就需要赋值两个
		//e[t1][t2] =e[t2][t1] = t3  无向图
	}

	for (k = 1; k <= n; k++) //Floyd-Warshall算法 引入第三个点k
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (e[i][j] > e[i][k] + e[k][j])//借助第三个点的中转和原来直接去的距离相比较，如果更短就进行更新
				{
					e[i][j] = e[i][k] + e[k][j];
				}
			}
		}
	}

	for (i = 1; i <= n; i++)//输出距离矩阵
	{
		for (j = 1; j <= n; j++)
		{
			printf("%5d", e[i][j]);
		}
		printf("\n");
	}
	return 0;
}
