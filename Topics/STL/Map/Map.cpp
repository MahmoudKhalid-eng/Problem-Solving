#include <iostream>
#include <map>
using namespace std;
int main(){

    /// declaration

    /*
    map<int,string> m{ {1,"Mahmoud"},{3,"Ahmed"}};
    m[4]="Ali";  // insert Ali with id 4
    for(auto m : m)
        cout<<m.first<<" - "<<m.second<<endl;
    /// count() returns 0 if the element doesn't exist else returns 1
    cout<<m.count(1)<<endl;// 1
    cout<<m.count(6)<<endl;// 0
    /// insert() --> it inserts the elements in order
    m.insert({2,"Adel"});
    for(auto m : m)
        cout<<m.first<<" - "<<m.second<<endl;
    */

    /*
    /// insert part of a map into another one using insert(),find()
    map <char,int>m1{{'a',1},{'b',2},{'c',3},{'d',4}};
    map <char,int>m2;
    m2.insert(m1.find('a'),m1.find('c')); //insert from the first parameter to before the second
    for(auto m2 : m2)
        cout<<m2.first<<" - "<<m2.second<<endl;
    */

    /// erase a range using find()
    map <char,int>m1{{'a',1},{'b',2},{'c',3},{'d',4},{'e',5}};
    m1.erase(m1.find('b'),m1.find('e')); // delete all elements in that range
    for(auto m1 : m1)
        cout<<m1.first<<" - "<<m1.second<<endl;
    /// swap , clear , size ,empty
    /// multi map is a map with duplicate keys but don't support random access


}
