//Merge Sort

//Recursive

#include <iostream>
using namespace std;

void merge(int arr[],int p,int q,int w){
	int n1=q-p+1;
	int n2=w-q;
	
	int l[n1];
	int r[n2];
	
	for (int i=0;i<n1;i++){
		l[i]=arr[p+i];
		
	}
	
	for (int j=0;j<n2;j++){
		r[j]=arr[q+1+j];
	}
	
	int i,j,k;
	i=0;
	j=0;
	k=p;
	
	while (i<n1 && j<n2){
		if (l[i]<=r[j]){
			arr[k]=l[i];
			i++;
		}
		else{
			arr[k]=r[j];
			j++;
		}
		k++;
	}
	while (i<n1){
		arr[k]=l[i];
		i++;
		k++;
		
	}
	
	while (j<n2){
		arr[k]=r[j];
		j++;
		k++;
	}
	
}
void mergeSort(int arr[], int s, int e){

	if (s<e){
		int m=(s+(e-s))/2;
		mergeSort(arr,s,m);
		mergeSort(arr,m+1,e);
		merge(arr,s,m,e);
	}
	
	
}

int main(){
	int arr[5]={10,9,8,7,6};
	mergeSort(arr,0,4);
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}