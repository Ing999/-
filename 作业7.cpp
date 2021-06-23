#include <iostream>
using namespace std;

#define MAX 201

void MaxProfit(int f[][MAX], int number, int money) {
	int F[MAX][MAX] = { 0 }, Mk[MAX][MAX] = { 0 }, max;
	for (int i = 1; i <= number; i++)
	{
		for (int j = 1; j <= money; j++) {
			max = 0;
			for (int k = 0; k <= j; k++)
			{

				if (F[i - 1][j - k] + f[i][k] > max)
				{
					max = F[i - 1][j - k] + f[i][k];
					Mk[i][j] = k;
				}
			}
			F[i][j] = max;
		}
	}

	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j <= money; ++j) {
			printf("%d ", F[i][j]);
		}
		printf("\n");
	}

	for (int i = 1; i <= number; i++)
	{
		for (int j = 0; j <= money; ++j) {
			printf("%d ", Mk[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int f[MAX][MAX] = { 0 };
	int m, n;
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; ++j) {
			scanf("%d", &f[i][j]);
		}
	}
	MaxProfit(f, n, m);
} 
[githubÔ´ÂëµØÖ·]
