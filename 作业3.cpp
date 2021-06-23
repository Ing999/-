#include<iostream>
using namespace std;
int main(){



void Merge(int A[],int low, int mid, int high){
	int x=low, y=low, z=mid+1;
	while (x<=mid&&z<=high){//对A数组左右两边的数据进行比较，按序排列放入暂存数组B中
		if (A[x] < A[z])B[y++] = A[x++];
		else B[y++] = A[z++];
	}
	while (x <= mid){//为下次归并做预处理
		B[y++] = A[x++];
	}
	while (z<=high){//为下次归并做预处理
		B[y++] = A[z++];
	}
	for (y = low; y <= high; y++){//比较完毕，将暂时存放的数据作为归并结果存放回A
		A[y] = B[y];
	}
}

void MergeSort(int A[],int low,int high){
	if (low < high){
		int mid = (low + high) / 2;
		MergeSort(A,low, mid);//排序左半边
		MergeSort(A,mid + 1, high);//排序右半边
		Merge(A,low, mid, high);// 将左半边和右半边结合起来归并
	}
}


