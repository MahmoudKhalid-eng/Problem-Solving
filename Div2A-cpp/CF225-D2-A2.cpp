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
    for (int i=0;i<n;i++)
        {
	  cin>>a>>b ;
	  if(a==x||a==7-x||b==x||b==7-x)
	  {
	      flag =false;
	  }
  }
    if(flag) cout<<"YES";
    else cout<<"NO";
	return 0 ;
}
