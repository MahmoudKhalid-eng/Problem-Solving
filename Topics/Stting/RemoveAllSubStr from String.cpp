#include <bits/stdc++.h>
using namespace std;
void removeSubStr(string& s,string& sub){
    int n=sub.length();
    for (auto i = s.find(sub);i != string::npos;i = s.find(sub)){
        s.erase(i, n);
        s.insert(i," ");
    }
}
int main(){
    string s;
    cin>>s; // BRITISHEGYPTGHANA
    string p;
    cin>>p; // EGYPT
    removeSubStr(s,p);
    cout<<s; // BRITISH GHANA
}


