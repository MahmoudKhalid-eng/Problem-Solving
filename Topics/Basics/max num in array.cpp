#include <bits/stdc++.h>
using namespace std;
int maxArr(int arr[],int n){
    return *max_element(arr,arr+n);
}
int main(){
	int arr[]= {1,2,800,4,120};
	cout<<maxArr(arr,5);
	return 0;
}
