#include <iostream> 
/*#include <algorithm>
using namespace std;
int main(){
	int num_of_rows;
	cin>>num_of_rows;
	int arr[num_of_rows-1];
	for(int i=0;i<num_of_rows;i++){
		cin>>arr[i];
	}
	sort(arr,arr+num_of_rows);
	for(int i=0;i<num_of_rows;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for(int i = 0;i<x;i++)cin>>arr[i];
    sort(arr,arr+x);
    for(int i = 0;i<x;i++)cout<<arr[i]<<" ";
    return 0;
}
