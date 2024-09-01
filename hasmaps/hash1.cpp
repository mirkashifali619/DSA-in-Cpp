#include<iostream>
#include <algorithm>
#include <unordered_map> 
using namespace std;
int main(){
    unordered_map<int,int>ans; 
    int arr[] = {4,3,3,1,1,1,4,2};
    // arrange the arrays by higher to lower frequency 
    for(int i : arr){
        ans[i]++;
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<"Values-"<<it.first<<" count- "<<it.second<<endl;
    }
    return 0;
}