#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,min=0,own=0;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
	}
	sum /= 2;
	sort(arr,arr+n);
	reverse(arr,arr+n);
	for(int i=0;i<n;i++){
		own += arr[i];
		min++;
		if(own > sum){
			break;
		}
	}
	cout<<min;
}
