#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);  // subtract a from b until b=0
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(a*b)/gcd(a,b);
    // built in function __gcd(a,b);
}
