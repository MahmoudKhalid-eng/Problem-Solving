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
	int n,x,a,b;
	bool flag=true;
	cin>>n>>x;
	set <int> st;
	while(n--){
        st.insert(x);
        st.insert(7-x);
        cin>>a>>b;
        st.insert(a);
        st.insert(7-a);
        st.insert(b);
        st.insert(7-b);
        if(st.size()!= 6){
            flag=false;
        }
        else{
            st.clear();
        }
	}
	if(flag) cout<<"YES";
	else cout<<"NO";

	return 0;
}
