
#include <iostream>
using namespace std;
int main(){
	string stones,instructions;
	cin>>stones; //RRRBGBRBBB
	cin>>instructions; //BBBRR
	int count=0;	
	for(int i=0;i<(stones.length()+instructions.length());i++){
		if(instructions[i]==stones[count]) count++;
	}
	cout<<++count;
	return 0;
}
