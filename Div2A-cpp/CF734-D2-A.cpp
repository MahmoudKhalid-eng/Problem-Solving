#include <iostream>
using namespace std;
int main(){
	int num_Ofgames,n_A=0,n_D=0;
	cin>>num_Ofgames;
	string s;	
	cin>>s;
	for(int i=0;i<num_Ofgames;i++){
		if(s[i]=='A') 	n_A++; 		else n_D++;
	}
	if(n_A>n_D) cout<<"Anton";
	else if(n_D>n_A) cout<<"Danik";
	else cout<<"Friendship";
	return 0;
	}
