#include<iostream>
using namespace std;
int main(){
	
void Mergesort(int l,int r){
    int mid = (l + r) >> 1;
    if(r - l + 1 <= 1){ // ������г���<=1�Ļ���ô������б�Ȼ�������
        return;
    }
else if(r - l + 1 == 2){// ���������еĳ��� == 2 ��ô���ǿ����ֶ���������н�������
        if(arr[r] < arr[l]){
            int t;
            t = arr[r];
            arr[r] = arr[l];
            arr[l] = t;
        }
    }
    else{
        Mergesort(l , mid);     
        Mergesort(mid + 1,  r); 
        // �����г��� > 2ʱ�����ǰ����зֳ����飬�ֱ�����е��������У����������н�������
        // �����������ź���֮��������Ҫ���������������й鲢��Ϊһ����������
        int s1 = l , s2 = mid + 1;
        int s = l;
        while(s1 <= mid && s2 <= r){ // ÿ��ֻȡ��������������С�������������������й鲢��һ��
            if(arr[s1] < arr[s2]) tmp[s++] = arr[s1++];
            else tmp[s++] = arr[s2++];
        }
        while(s1 <= mid) tmp[s++] = arr[s1++];
        while(s2 <= r) tmp[s++] = arr[s2++];
        for(int i = l ; i <= r; ++ i) arr[i] = tmp[i]; // ������õ�tmp���鸳ֵ��arr
    }
}
