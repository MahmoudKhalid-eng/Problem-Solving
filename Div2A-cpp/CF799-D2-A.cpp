#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int needed_cakes,time_to_bake_kcakes,cakes_at_time,build_oven_time;
	int firstOvanFree,secondOvanFree;
	cin>>needed_cakes>>time_to_bake_kcakes>>cakes_at_time>>build_oven_time;
	firstOvanFree=0;
	secondOvanFree=build_oven_time;
	int timeForUsingOneOven=ceil(float(needed_cakes) / cakes_at_time) * time_to_bake_kcakes ;
	bool isReasonable=true;
	//8 6 4 5
	if(cakes_at_time>=needed_cakes){
		isReasonable=false;
	}
	else{
		while(needed_cakes>0){
			if(firstOvanFree <= secondOvanFree){
				firstOvanFree += time_to_bake_kcakes;
				needed_cakes -= cakes_at_time;
			}
			else{
				secondOvanFree += time_to_bake_kcakes;
				needed_cakes -= cakes_at_time;
			}
		}
		if(max(firstOvanFree,secondOvanFree)<timeForUsingOneOven) isReasonable =true;
		else isReasonable=false;	
	}
	if(isReasonable==true) cout<<"YES";
	else cout<<"NO";
	return 0;
}
