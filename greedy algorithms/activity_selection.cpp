/*
IF ACTIVITIES ARE SORTED ACCORDING TO FINISH TIME
*/
#include <iostream>
#include <vector>
using namespace std;

void maxActivities(int s[], int f[], int n){
	vector<int> ans;

    int i=0;
	//first activity is always selected;
	ans.push_back(i);

	for(int j=1;j<n;j++){
		if(s[j]>f[i]){
			ans.push_back(j);
			i=j;
		}
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	int s[]={1, 3, 0, 5, 8, 5};
	int f[]={2, 4, 6, 7, 9, 9};
	int n=sizeof(s)/sizeof(s[0]);
	maxActivities(s, f, n);

}