#include <iostream>
using namespace std;

void moveTower(int n, char sourceRod, char destinationRod, char auxRod){
    if(n==0){
        return;
    }
    moveTower(n-1, sourceRod, auxRod, destinationRod);
    cout<<"Move disk "<<n<<" from "<<sourceRod<<" to "<<destinationRod<<endl;
    moveTower(n-1, auxRod, destinationRod, sourceRod);
}

int main()
{
    int n;
    cout<<"Enter number of disks"<<endl;
    cin>>n;
    cout<<"Steps to solve Hanoi Tower with "<<n<<" disks are:"<<endl;
    moveTower(n,'S','D','A');
}