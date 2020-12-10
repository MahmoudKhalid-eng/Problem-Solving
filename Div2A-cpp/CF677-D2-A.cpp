#include <iostream>
using namespace std;
int main(){
	int fence_height,num_of_friends,best_width=0,friend_hight;
	cin>>num_of_friends>>fence_height;
	while(num_of_friends--){
		cin>>friend_hight;
		if(friend_hight>fence_height){
			best_width +=2;
		}
		else{
			best_width ++;
		}
	}
	cout<<best_width;
	
	return 0;
}
