/*
Binary Search
*/

//Recursive

/*#include <iostream>
using namespace std;

int binarySearch(int start, int end, int arr[], int target){
    if(start<end){
        int mid=(start+end)/2;

        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            return binarySearch(start,mid-1,arr,target);
        }
        
        return binarySearch(mid+1,end,arr,target);
        
    }
    return -1;
}


int main(){
    int arr[]={25,34,42,59,66,71,83,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=binarySearch(0,n-1,arr,83);

    if(ans!=-1){
        cout<<"Element is found at index "<<ans;
    }
    else{
        cout<<"Element not found";
    }

}*/



//Iterative

#include <iostream>
using namespace std;

int binarySearch(int start, int end, int arr[], int target){
    while(start<=end){
        int mid=(start+end)/2;

        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]>target){
            end=mid-1;
        }
        start=mid+1;
    }
    return -1;
}
int main(){
    int arr[]={25,34,42,59,66,71,83,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=binarySearch(0,n-1,arr,83);
    
    if(ans!=-1){
        cout<<"Element is found at index "<<ans;
    }
    else{
        cout<<"Element not found";
    }
    
    return 0;
}