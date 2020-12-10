#include <bits/stdc++.h> 
using namespace std;
int fr[4];
int main(){
	int n;
	cin>>n;
	int arr[4][n];
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		fr[x]++;
		arr[x][fr[x]]=i ;
	}
	//7 === 1 3 1 3 2 1 2
	int temp = min(min(fr[1],fr[2]),fr[3]);
    cout<<temp<<"\n";
	for(int i=1;i<=temp;i++)
	 cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
	return 0;
} 
