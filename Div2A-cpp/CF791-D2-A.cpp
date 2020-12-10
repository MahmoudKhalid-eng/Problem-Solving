#include <iostream>
using namespace std;
int main(){
	int limak,bear;
	int year=0;
	cin>>limak>>bear;
	while(limak<=bear){
		limak *=3;
		bear *=2;
		year++;
	}
	cout<<year;
}
