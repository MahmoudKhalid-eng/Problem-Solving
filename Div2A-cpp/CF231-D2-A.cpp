#include <iostream>
using namespace std;
int main(){
	int props_num;
	cin>>props_num;
	int a,b,c;
	int ans=0;
	while(props_num--){
		cin>>a>>b>>c;
		
		ans+=(a+b+c>=2);
		
	}
	cout<<ans;
	return 0;
}
