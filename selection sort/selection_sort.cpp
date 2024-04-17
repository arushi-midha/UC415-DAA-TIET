#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            //finding the minimum element in the unsorted array
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        //swap minimum element for the first unsorted element
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
}

//TIME COMPLEXITY IS O(N^2)
//SPACE COMPLEXITY IS O(1)