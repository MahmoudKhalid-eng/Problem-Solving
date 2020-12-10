#include <bits/stdc++.h> 
using namespace std;
void sortString(string &str)
{
   sort(str.begin(), str.end());
}
int main(){
		char str[100];
		cin>>str;
		string res;
		char delim[]="+";
		char *token = strtok(str,delim);
    while (token)
    {	
        res += token;
        token = strtok(NULL,delim);
    }
		sortString(res);
		for(int i=0;i<res.length();i++){
			if(i<res.length()-1)cout<<res[i]<<'+';
			else cout<<res[i];
		}
		return 0;
} 
