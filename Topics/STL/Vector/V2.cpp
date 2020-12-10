#include <iostream>
#include <vector>
using namespace std;
int main(){

    // print all vector's data  , auto
    /*
    vector <int> v={1,2,3,4,5};
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    */

    // print all vector's data reversed
    /*
    vector <int> v={1,2,3,4,5};
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<endl;
    }
    */

    // insert in a vector
    /*
    vector <int> v={1,2,3,4,5};
    v.insert(v.begin()+1,55); //the element in position is right shifted
    //v = 1,55,2,3,4,5
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    */

    // emplace in a vector (faster than insert)
    /*
    vector <int> v={1,2,3,4,5};
    v.emplace(v.begin()+1,55); //the element in position is shifted to right
    //v = 1,55,2,3,4,5
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    */

    // erase
    /*
    vector <int> v={1,2,3,4,5};
    v.erase(v.begin()); // 2,3,4,5
    v.erase(v.begin(),v.end()-1); // 5
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    */
}
