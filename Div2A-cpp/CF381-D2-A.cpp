#include <bits/stdc++.h>
using namespace std;
	
	int main()	{
	int t;
	int serj=0 ,  dem=0;
	bool sirjisplaying=true;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++){ 	
		cin>>arr[i];
	}
	int left=0,right=t-1;
	while(left<=right){
		if(arr[left]>=arr[right]){  
			if(sirjisplaying){
				serj+=arr[left];
			}
			else{
				dem+=arr[left];				
			}
			left++;
		}
		else if(arr[right]>arr[left]){
			if(sirjisplaying){
				serj+=arr[right];
			}
			else{
				dem+=arr[right];				
			}
			right--;
		}
		if(sirjisplaying) sirjisplaying=false;
		else sirjisplaying=true;
	}
	cout<<serj<<" "<<dem;
	return 0;
}
