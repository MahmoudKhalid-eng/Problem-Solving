#include <iostream>
using namespace std;
int main(){
	int n;
	int crim=0,police=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>0) police+=arr[i];
		else {
			if(police>0) police--;
			else crim++;
		}
	}
	cout<<crim;
	return 0;
}
