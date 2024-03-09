#include <iostream>
#include <algorithm>
using namespace std;
class item{
	public:
		int profit;
		int weight;
};

bool compare(item i1, item i2){
	double r1=(double)i1.profit/i1.weight;
	double r2=(double)i2.profit/i2.weight;
	return r1>r2;
}

void additems(item arr[], int n, int targetw){
	sort(arr, arr+n, compare);

	double sum=0.0;
	for(int i=0;i<n;i++){
		if(arr[i].weight<targetw){
			targetw=targetw-arr[i].weight;
			sum+=arr[i].profit;
		}

		else{
			sum+=((double)targetw/arr[i].weight)*arr[i].profit;
		}
	}

	cout<<sum;
}

int main(){
	int target=10;
	item arr[]={ { 500, 30 } };
	int n=sizeof(arr)/sizeof(arr[0]);
	additems(arr, n, target);
}