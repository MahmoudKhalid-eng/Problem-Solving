#include <bits/stdc++.h>

using namespace std;

void printSubs(int arr[],int n){
    int cnt = pow(2,n);
    for(int i=0;i<cnt;i++){
        for(int j=0;j<n;j++){
            if((i&(1<<j))>0){
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	printSubs(arr,n);
}
