#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lcs(int m, int n, string s1, string s2, vector<vector<int>> &table){
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            if(i==0 or j==0){
                table[i][j]=0;
            }
            else if(s2[i-1]==s1[j-1]){
                table[i][j]=1+table[i-1][j-1];
            }
            else{
                table[i][j]=max(table[i-1][j],table[i][j-1]);
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<"\n";
    }

    return table[m-1][n-1];
}

int main(){
    string s1="stone";
    string s2="longest";
    int l1=s1.length();
    int l2=s2.length();
    vector<vector<int>> table(l2+1, vector<int>(l1+1));
    int ans=lcs(l2+1,l1+1,s1,s2,table);
    cout<<ans;


}