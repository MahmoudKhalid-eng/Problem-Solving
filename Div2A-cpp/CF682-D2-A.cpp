#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int main(){
	fast();
	long long n,m;
	long long arr1[5]={0},arr2[5]={0};

	cin>>n>>m;
	for(int i=1;i<=n;i++){
        arr1[i%5]++;
	}
	for(int i=1;i<=m;i++){
        arr2[i%5]++;
	}
    cout<<(arr1[0]*arr2[0])+(arr1[1]*arr2[4])+(arr1[4]*arr2[1])+(arr1[2]*arr2[3])+(arr1[3]*arr2[2]);
	return 0;
}
