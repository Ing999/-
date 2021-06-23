#include<stdio.h>
int main(void)
{

//判断是否能着色 
bool cancColoring(int x) {
	for (int i = 1; i <= n; ++i) {
		//若两点相邻且颜色相同
		if (graph[i][i] && color[i] == color[i]) {
			return false;
		}
	}
	return true;
}
}
//着色 
void coloring(int x){
	if (x>n) {
		for (int i = 1; i <= n; i++){
			printf("%d ", color[i]);
		}
		s++;
		printf("\n");
	} 
	else {
		for (int i = 1; i <= m; ++i) {
			color[x] = i;
			if (cancColoring(x)) {
				coloring(x+1);
			}
			color[x] = 0;
		}
	}
}