/*
Given n number of jobs with their deadlines and profits, find sequence of jobs with max profit
->start time is same for all
->constraints are:
  each job is assigned single slot of time
  single job is executed at a time with no preemption (because of uniprocessor)

Algorithm:
1. Sort according to descending profit
2. Get the maximum deadline
3. Traverse through the profits and fit the jobs wherever they can fit in the slots
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int deadline;
    int profit;

    Job(int id, int d,int p){
        this->id=id;
        this->deadline=d;
        this->profit=p;
    }
};

bool compare(struct Job a, struct Job b){
    return a.profit>b.profit;
}

void jobScheduling(Job data[], int n){
    sort(data,data+n,compare);
    int dmax=0;
    for(int i=0;i<n;i++){
        if(dmax<data[i].deadline){
            dmax=data[i].deadline;
        }
    }
    
    int slot[n]={0};
    int sum=0;
    for(int i=0;i<n;i++){
        int currDead=data[i].deadline;
        while(currDead>=1){
            if(slot[currDead-1]==0){
                slot[currDead-1]=data[i].id;
                sum+=data[i].profit;
                break;
            }
            currDead--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<slot[i]<<" ";
    }
    cout<<"\n"<<sum;
}


int main(){
    Job data[]={{1,7,15},{2,2, 20}, {3,5, 30}, {4,3, 18}, {5,4, 18}, {6,5,10}, {7,2,23}, {8,7,16}, {9,3,25}};
    //7 15, 2 20, 5 30, 3 18, 4 18, 5 10, 2 23, 7 16, 3 25
    //2 7 9 5 3 1 8
    int n=sizeof(data)/sizeof(data[0]);
    

    jobScheduling(data,n);

}