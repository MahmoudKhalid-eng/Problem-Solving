#include <iostream>
#include <set>
using namespace std;
int main(){
    /// declaration and print

    /*
    set <int> s{1,2,2,3,4,5,6,7,8,9};
    // s = {1,2,3,4,5,6,7,8,9}
    for(auto s:s){
        cout<<s<<endl;
    }
    */

    /// insert()

    /*
    set <int> s{1,2,2,3,4,5,6,7,8,9};
    // s = {1,2,3,4,5,6,7,8,9}
    s.insert(9); // if 9 exists don't insert it else insert
    // s = {1,2,3,4,5,6,7,8,9}
    s.insert(10);// if 10 exists don't insert it else insert
    // s = {1,2,3,4,5,6,7,8,9,10}
    */

    /// erase()

    /*
    /// first way
    set <int> s{1,2,2,3,4,5,6,7,8,9};
    // s = {1,2,3,4,5,6,7,8,9}
    s.erase(9);// removes 9 from the set
    // s = {1,2,3,4,5,6,7,8}

    /// second way
    set <int> s1{1,2,2,3,4,5,6,7,8,9};
    // s1 = {1,2,3,4,5,6,7,8,9}
    auto it=s1.find(3);//returns the position of 3
    s1.erase(it,s1.end());//removes from 3 to the end of the set
    // s = {1,2}

    /// third way using upper_bound() and lower_bound()
    set <int> s2{1,2,2,3,4,5,6,7,8,9};
    // s2 = {1,2,3,4,5,6,7,8,9}
    auto itlow =s2.lower_bound(2);//refers to the position of 2
    auto itup =s2.upper_bound(6);//refers to the position of 6
    s2.erase(itlow,itup);//removes all elements from 2 to 6
    // s2 = {1,7,8,9}
    */

    /// clear() ---> empty the set
    /// s.count(5) if 5 exists return 1 else return 0
    /// s.count(5) in multi set return the frequency of 5 int the set


}

