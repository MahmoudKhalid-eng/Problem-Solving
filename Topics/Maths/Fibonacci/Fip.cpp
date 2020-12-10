#include <bits/stdc++.h>

using namespace std;
void fib(int x){
    int arr[x];
    arr[0]=0,arr[1]=1;
    for(int i=2;i<x;i++){
        arr[i]=arr[i-1]+arr[i-2];}
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";}
}
int fib2(int x){
    if(x<=1) return x;
    return fib2(x-1)+fib2(x-2);
}
int main(){
    int n;
    cin>>n;
    fib(n);
    cout<<"\n"<<fib2(n-1);
}

