#include <bits/stdc++.h>
using namespace std;
int DecToBin(int n){
    int bits=(log2(n))+1;
    int arr[bits]; // # of bits
    int i=0;
    while(n>0){
        arr[i]=n%2;
        n /= 2;
        i++;
    }
    for(int i=bits-1;i>=0;i--){
        cout<<arr[i];
    }
}
void BinToDec(int n){
    int digits=(log10(n))+1;
    int j=0,rem,dec=0;
    while(n!=0){
        rem = n%10;
        n /= 10;
        dec += rem * pow(2,j);
        j++;
    }
    cout<<dec;
}
int main(){
    DecToBin(7);
    cout<<endl;
    BinToDec(100001);
}
