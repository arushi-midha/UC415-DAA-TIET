/*
Greedy Algorithms
1. Min cost
2. Min resources
3. Max profit
4. Min risk factor
Optimal solution will be only one
*/

//Fractional KnapSack Problem
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void pairsort(int a[], int b[], int n){
    pair<int, int> pairs[n];

    for(int i=0;i<n;i++){
        pairs[i].first=a[i];
        pairs[i].second=b[i];
    }

    sort(pairs, pairs+n);

    for(int i=0;i<n;i++){
        a[i]=pairs[i].first;
        b[i]=pairs[i].second;
    }
}


int main(){
    int w[]={280,100,120,120};
    int p[]={40,10,20,24};
    int n=sizeof(p)/sizeof(p[0]);
    int pw[4];

    for(int i=0;i<n;i++){
        pw[i]=w[i]/p[i];
    }

    
    pairsort(pw, w, n);
    pairsort(pw, p, n);

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<w[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        cout<<pw[i]<<" ";
    }
    int m=60;
    
    /*for(int i=0;i<n;i++){
        if(m>0 && w[i]<m){
            m=m-w[i];
            profit=p+p[i];
        }
    }*/



}

