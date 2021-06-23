#include<iostream>
using namespace std;
int main(){
	int select(int a[], int low, int high, int k)
{
	int middle;
	middle = split(a, low, high);
	if (middle == k)
		return a[k];
	else if (middle < k)
		return select(a, middle + 1, high, k);
	else
		return select(a, low, middle - 1, k);
}
}
