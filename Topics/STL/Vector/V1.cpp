#include <iostream>
#include <vector>
using namespace std;
int main(){
	
    // 3 ways of declaring a vector
    /*
    vector <int> v1(5);//vector of 5 elements all = 0
    //v1={0,0,0,0,0}
    vector <int> v2={1,2,3,4,5};//vector of 5 elements
    //v2={1,2,3,4,5}
    vector <int> v3(5,200);//vector of 5 elements all=200
    //v3={200,200,200,200,200}
    */

    // push_back()
    /*
    vector <int> v1(5);
    //v1 ={0,0,0,0,0}
    v1.push_back(100);
    //v1 ={0,0,0,0,0,100}
    cout<<v1[5];//100
    */


    // copy vector to another
    /*
    vector <int> v1(5,200);
    vector <int> v2(v1);
    cout<<v2[0];
    */

    // swap()
    /*
    vector <int> v1(5,100);
    // v1 = 100,100,100,100,100
    vector <int> v2(5,200);
    // v2 = 200,200,200,200,200
    v1.swap(v2);
    // v1 = 200,200,200,200,200
    // v2 = 100,100,100,100,100
    cout<<v1[0]<<" "<<v2[0];
    */

    // front() , back()
    /*
    vector <int> v1={1,2,3,4,5};
    // v1 = 1,2,3,4,5
    cout<<v1.front()<<" "<<v1.back();//1 5
    */

    // size() , capacity()
    /*
    vector <int> v1(100,5);
    cout<<"Before the push size = "<<v1.size();
    cout<<"\ncapacity = "<<v1.capacity();
    v1.push_back(6); //capacity *= 2
    cout<<"\nAfter the push size = "<<v1.size();
    cout<<"\ncapacity = "<<v1.capacity();
    */

    // pop_back()
    /*
    vector <int> v1(5,100);// 100,100,100,100,100
    cout<<v1.size()<<endl; // 5
    v1.pop_back();//100,100,100,100
    cout<<v1.size(); // 4
    */

    // empty()
    /*
    vector <int> v1(1);// if  empty print 1 else print 0
    cout<<v1.empty()<<endl;//0
    v1.pop_back();
    cout<<v1.empty();//1
    */
}
