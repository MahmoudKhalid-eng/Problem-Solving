#include <bits/stdc++.h>
using namespace std;

int DigitsDec(int x){
    int digits=(log10(x))+1;
    return digits;
}
int BitBin(int x){
    int bits=(log2(x))+1;
    return bits;
}
int main(){
    int n;
    cin>>n;
    cout<<DigitsDec(n)<<endl;
    cout<<BitBin(n);
}
