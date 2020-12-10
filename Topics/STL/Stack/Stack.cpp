#include <iostream>
#include <stack>
using namespace std;
int main(){
   stack<string> s; // first in last out
   s.push("Mahmoud");
   s.push("Ahmed");
   s.push("Khalid");
   s.push("Hany");
   for(int i=0;!s.empty();i++){
    cout<<s.top()<<endl; // Hani Khalid Ahmed Mahmoud
    s.pop();
   }
}
