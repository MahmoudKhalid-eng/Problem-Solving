#include <bits/stdc++.h>
using namespace std;
int cntSubs(string& s,string& sub){
    int n=sub.length();
    int cnt=0;
    for (auto i = s.find(sub);i != string::npos;i = s.find(sub)){
        s.erase(i, n);
        cnt++;
    }
    return cnt;
}
int main(){
    string s;
    cin>>s; // ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
    string p;
    cin>>p; // EGYPT
    cout<<cntSubs(s,p); // how many time EGYPT appear? : 3
}


