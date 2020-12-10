#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main(){
	// 3 metohds of declaration
	/*
	pair <int,string> p1(1,"Mahmoud");
	pair <int,string> p2=make_pair(2,"Ahmed");
	pair <int,string> p3;
	cin>>p3.first>>p3.second;
	cout<<p1.first<<" "<<p1.second<<endl;// 1 Mahmoud
	cout<<p2.first<<" "<<p2.second<<endl;// 2 Ahmed
	cout<<p3.first<<" "<<p3.second<<endl;// ...........
	*/

	// pair of pair
	/*
	pair<int,pair<int,string> > p;
	p.first=1;p.second.first=19;p.second.second="Mahmoud";
	cout<<p.first<<"\n"<<p.second.first<<"\n"<<p.second.second<<endl;
	*/

    // vector of pair

	vector<pair<int,string> > v1;
	vector<pair<int,string> > :: iterator it;
	v1.push_back({1,"Mahmoud"});
	v1.push_back({2,"Ahmed"});
	for(it=v1.begin();it!=v1.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}

	return 0;
}
