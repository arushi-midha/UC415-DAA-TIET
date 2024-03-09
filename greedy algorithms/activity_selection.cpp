/*
IF ACTIVITIES ARE SORTED ACCORDING TO FINISH TIME-------------------------------

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
*/

//IF ACTIVITIES ARE NOT SORTED-------------------------
#include <iostream>
#include <algorithm>
using namespace std;
class activity{
	public:
		int start;
	    int finish;
	
};

bool compare(activity a1, activity a2){
	return (a1.finish<a2.finish);
}

void maxActivities(activity arr[], int n){

	sort(arr, arr+n, compare);

	int i=0;
	cout<<"("<<arr[i].start<<","<<arr[i].finish<<") ,";

	for(int j=1;j<n;j++){
		if(arr[j].start>=arr[i].finish){
			cout<<" ("<<arr[j].start<<","<<arr[j].finish<<") ,";
			i=j;	
		}
	}

}
int main(){
	activity arr[]={ { 5, 9 }, { 1, 2 }, { 3, 4 },
                    { 0, 6 }, { 5, 7 }, { 8, 9 } };
	int n=sizeof(arr)/sizeof(arr[0]);

	maxActivities(arr, n);
}

//this can also be implemented with priority queues
