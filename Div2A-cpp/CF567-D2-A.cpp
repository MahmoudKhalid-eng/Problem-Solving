#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long arr[n]={0},mx,mini;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		mx = max(abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
		if(i==0){
			mini =abs(arr[i]-arr[i+1]);
		}
		else if(i==n-1){
			mini =abs(arr[i]-arr[i-1]);
		}
		else {
			mini=min(abs(arr[i]-arr[i-1]),abs(arr[i]-arr[i+1]));
		}
		cout<<mini<<" "<<mx<<"\n";
 }	
 	
    return 0;
}
