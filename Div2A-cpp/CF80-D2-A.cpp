#include <bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main(){
	fast();
	int n,m;
	bool flag,f=false;
	cin>>n>>m;
	flag = isPrime(m);
	if(flag==false){
        cout<<"NO";
	}
	else{
        for(int i=n+1;i<=m;i++){
            if(isPrime(i)==false) continue;
            else{
                if(i==m) f=true;
                else {
                    f==false;
                    break;
                }
            }
        }
        if(f==true){
        cout<<"YES";
    }
        else{
        cout<<"NO";
    }
}


	return 0;

}
