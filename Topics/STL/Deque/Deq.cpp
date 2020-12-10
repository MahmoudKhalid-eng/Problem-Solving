#include <iostream>
#include <deque>

using namespace std;
int main(){
    // push_back()   push_front()
    /*
	deque <char> d={'r','o','g','r','a','m','m','e'};  
	d.push_back('r');	// rogrammer
	d.push_front('p');	// programmer
	for(auto it:d){
		cout<<it;
	}
	*/
	
	// emplace_back()	emplace_front()
	/*
	deque <char> d={'r','o','g','r','a','m','m','e'};  
	d.emplace_back('r'); 	// rogrammer
	d.emplace_front('p');	// programmer
	for(auto it:d){
		cout<<it;
	}
	*/
	// pop_back()	pop_front()
	/*
	deque <char> d={'p','r','o','g','r','a','m','m','e','r'};
	d.pop_front(); //rogrammer
	d.pop_back();  //rogramme
	for(auto it:d){
		cout<<it;
	}	
	*/
	// size() , empty() , insert() , erase() , sort()
    return 0;
}
