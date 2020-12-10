#include<bits/stdc++.h>

using namespace std;

int main(){
		string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./",inp,res;
		char shift;
		cin>>shift>>inp;
		if(shift=='R'){
			for(int i=0;i<inp.length();i++){
				res+=keyboard[keyboard.find(inp[i])-1];
			}
			cout<<res;
		}
		else{
			for(int i=0;i<inp.length();i++){
				res+=keyboard[keyboard.find(inp[i])+1];
			}
			cout<<res;
		}
	
}
