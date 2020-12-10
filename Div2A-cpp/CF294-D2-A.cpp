#include <iostream>
using namespace std;
int main(){
	int lines,i,killed_num,line_num,bird_num,arr_lines[101]={0};
	cin>>lines;
	for(i=1;i<=lines;i++) cin>>arr_lines[i];
	cin>>killed_num;
	for(i=1;i<=killed_num;i++){
		cin>>line_num>>bird_num;
		arr_lines[line_num-1] += bird_num-1;
		arr_lines[line_num+1] += arr_lines[line_num]-bird_num;
		arr_lines[line_num]=0;
	}
	for(i=1;i<=lines;i++){
		cout<<arr_lines[i]<<endl;
	}
	return 0;
}
