//Quick Sort


//Recursive

#include <iostream>
using namespace std;
int partition(int arr[], int start,int end){
	int i=start-1;
	int pivot=arr[end];
	for (int j=start;j<end;j++){
		if (arr[j]<=pivot){
			i++;
			//swap i and j element;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			
		}
		
	}
	//swap i+1 and pivot element
	int temp=arr[end];
	arr[end]=arr[i+1];
	arr[i+1]=temp;
	
	return(i+1);
}

void quickSort(int arr[],int start,int end){
	if (start<end){
		int pi=partition(arr,start,end);
		
		quickSort(arr,start,pi-1);
		quickSort(arr,pi+1,end);
	}
}
int main(){
	int n=15;
	int arr[n]={6,7,7,6,7,8,7,8,7,8,6,7,8,6,6};
	quickSort(arr,0,n-1);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}