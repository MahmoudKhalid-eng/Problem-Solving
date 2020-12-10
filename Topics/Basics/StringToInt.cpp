#include <bits/stdc++.h>
using namespace std;
int convert_String_To_Int(string s){
    stringstream st(s);
    int x=0;
    st >> x;
    return x;
}

int main(){
   string s;
   cin>>s;
   cout<<convert_String_To_Int(s);
}
