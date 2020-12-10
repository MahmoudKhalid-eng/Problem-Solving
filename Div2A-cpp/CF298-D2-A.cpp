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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int last=0,first=0;
    for(int i=0;i<n;i++){
        if(s[i]!='.'){
            first = i;
            break;
        }
    }
	for(int i=n-1;i>=0;i--){
        if(s[i]!='.'){
            last = i;
            break;
        }
	}
	if(s[first]=='R'&&s[last]=='R'){
        cout<<first+1<<" "<<last+1+1;
	}
	else if(s[first]=='L'&&s[last]=='L'){
        cout<<last+1<<" "<<first-1+1;
	}
	else if(s[first]=='R' && s[last]=='L'){
        for(int i=first;i<n;i++){
            last = i;
            if(s[i]=='L')
                break;
        }
        cout<<first+1<<" "<<last;
	}
	return 0;
}
