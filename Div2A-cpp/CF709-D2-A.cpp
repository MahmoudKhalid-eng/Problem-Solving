#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int oranges_num,max_size,condition;
	int size,sum=0,c=0;
	cin>>oranges_num>>max_size>>condition;
	while(oranges_num--){
		cin>>size;
		if(size>max_size) continue;
		else{
			sum += size;
			if(sum>condition){
			 c++;
			sum=0;
		}
		}
		
	}
	cout<<c;
	return 0;
}
